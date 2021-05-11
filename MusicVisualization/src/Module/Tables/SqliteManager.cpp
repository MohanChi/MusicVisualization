#include "SqliteManager.h"
#include <exception>

SqliteManager::SqliteManager()
{
}

SqliteManager::~SqliteManager()
{
}

DBStatus SqliteManager::InitializeDB(const char * DBName)
{
	if (DBName == "")
	{
		return SQLITE_FILE_NAME_IS_NULL;
	}
	this->DBName = DBName;
	return SQLITE_SUCCESS;
}

DBStatus SqliteManager::OpenDB()
{
	int rc;
	try
	{

		rc = sqlite3_open(this->DBName,&this->DBHandle);
	}
	catch (const std::exception& e)
	{
		return OPEN_SQLITE_DB_EXCEPTION;
	}

	if (rc)
	{
		return OPEN_SQLITE_DB_FAILED;
	}
	else {
		return SQLITE_SUCCESS;
	}
}

DBStatus SqliteManager::CloseDB()
{
	int rc;
	try
	{
		rc = sqlite3_close(this->DBHandle);

	}
	catch (const std::exception& e)
	{
		return SQLITE_CLOSED_EXCEPTION;
	}
	if (rc)
	{
		return SQLITE_CLOSED_FAILED;
	}
	else {
		return SQLITE_SUCCESS;
	}
}

DBStatus SqliteManager::Excute(std::string sql)
{
	char* errmsg = 0;
	int rc;
	try
	{
		rc = sqlite3_exec(this->DBHandle, sql.c_str(), 0, 0, &errmsg);
	}
	catch (const std::exception& e)
	{
		return SQLITE_EXCUTE_EXCEPTION;
	}
	if (rc) {
		return SQLITE_EXCUTE_FALIED;
	}
	else {
		return SQLITE_SUCCESS;
	}
}
