#include "MyHttp.h"
#include <curl/curl.h>
#include <fstream>

#define MAX_CONN_TIMEOUT 20
#define MAX_TIMEOUT 1000

MyHttp::MyHttp()
{
	curl_global_init(CURL_GLOBAL_ALL);
}

MyHttp::~MyHttp()
{
}

void MyHttp::PostJsonDataToServer(std::string serverUrl, std::string jsonData)
{
	CURL* curl = NULL;
	CURLcode res = CURLE_OK;
	struct curl_slist * headers = NULL;
	
	curl = curl_easy_init();
	if (curl) {
		curl_slist *http_headers = NULL;
		http_headers = curl_slist_append(http_headers, "Accept:application/json");
		http_headers = curl_slist_append(http_headers, "Content-Type:application/json");//text/html
		curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");
		curl_easy_setopt(curl, CURLOPT_URL, serverUrl.c_str());
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, http_headers);
		curl_easy_setopt(curl, CURLOPT_TIMEOUT, 1);
		curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, jsonData.c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, 0);//set callback
		res = curl_easy_perform(curl);
		if (res != CURLE_OK) {
			std::cout << "curl_easy_perform() failed:" << curl_easy_strerror(res);
		}
		curl_slist_free_all(headers);
		curl_easy_cleanup(curl);
		curl_global_cleanup();
	}
}

void MyHttp::PostFileToServer(std::string serverUrl, std::string filename)
{
	CURL *curl = curl_easy_init();
	if (curl)
	{
		// use multi-parts form post
		curl_easy_setopt(curl, CURLOPT_URL, serverUrl.c_str());
		struct curl_httppost * post = NULL;
		struct curl_httppost *last = NULL;
		struct curl_slist *headerlist = NULL;
		static const char buf[] = "Expect:";

		// add form
		curl_formadd(&post, &last,
			CURLFORM_COPYNAME, "file",
			CURLFORM_FILE, filename.c_str(),
			CURLFORM_END);
		curl_formadd(&post, &last,
			CURLFORM_COPYNAME, "uploadfile",
			CURLFORM_FILECONTENT, filename.c_str(),
			CURLFORM_CONTENTTYPE, "audio/mp3",
			CURLFORM_END);
		/*curl_formadd(&post, &last,
			CURLFORM_COPYNAME, "file",
			CURLFORM_FILE, "ThisIsAtxt.txt",
			CURLFORM_END);
		curl_formadd(&post, &last,
			CURLFORM_COPYNAME, "uploadfile",
			CURLFORM_COPYCONTENTS, "ThisIsAtxt.txt",
			CURLFORM_END);*/
		
		headerlist = curl_slist_append(headerlist, buf);
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headerlist);
		auto b = curl_easy_setopt(curl, CURLOPT_HTTPPOST, post);
		auto c = curl_easy_perform(curl);

		curl_formfree(post);
		curl_easy_cleanup(curl);
		curl_global_cleanup();
	}
}

void MyHttp::GetFileFromServer(std::string serverUrl, std::string outFilename)
{
	FILE* fp = fopen(outFilename.c_str(), "wb");
	if (!fp) {
		std::cout << "Create file failed" << std::endl;
	}

	CURL *curl = curl_easy_init();
	if (curl)
	{
		// set params  
		curl_easy_setopt(curl, CURLOPT_URL, serverUrl.c_str()); // url  
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, false); // if want to use https  
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, false); // set peer and host verify false  
		curl_easy_setopt(curl, CURLOPT_VERBOSE, 1);
		curl_easy_setopt(curl, CURLOPT_READFUNCTION, NULL);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, callback_write_file);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
		curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1L); 
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, true);
		curl_easy_setopt(curl, CURLOPT_HEADER, false);
		curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, MAX_CONN_TIMEOUT); // set transport and time out time  
		curl_easy_setopt(curl, CURLOPT_TIMEOUT, 3);
		// start req  
		curl_easy_perform(curl);
		fflush(fp);
		fseek(fp, 0, SEEK_END);
		int nDown = ftell(fp);
		fclose(fp);
	}
	
	// release curl  
	curl_easy_cleanup(curl);

}

size_t MyHttp::callback_write_file(void * ptr, size_t size, size_t nmemb, void * userdata)
{
	FILE *fp = static_cast<FILE *>(userdata);
	size_t length = fwrite(ptr, size, nmemb, fp);
	//std::cout << length << ", " << nmemb << ", "  << size << ", "<< size * nmemb << std::endl;
	/*if (length != nmemb)
	{
		return length;
	}*/
	int written = (int)size * (int)nmemb;
	return written;
}
