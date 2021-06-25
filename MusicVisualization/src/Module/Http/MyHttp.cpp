#include "MyHttp.h"
#include <curl/curl.h>
#include <fstream>

MyHttp::MyHttp()
{
	curl_global_init(CURL_GLOBAL_ALL);
}

MyHttp::~MyHttp()
{
}

void MyHttp::SendJsonDataToServer(std::string serverUrl, std::string jsonData)
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

void MyHttp::SendFileToServer(std::string serverUrl, std::string filename)
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