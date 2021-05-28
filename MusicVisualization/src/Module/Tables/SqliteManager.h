#pragma once
#include <sqlite3.h>
#include <string>
#include "CommonErrorCode.h"

class SqliteManager
{
public:
	SqliteManager();
	~SqliteManager();

	DBStatus InitializeDB(const char* DBName);
	DBStatus OpenDB();
	DBStatus CloseDB();
	DBStatus Excute(std::string sql);
	DBResult Select(std::string sql);

private:
	const char* DBName;
	sqlite3* DBHandle;
};
