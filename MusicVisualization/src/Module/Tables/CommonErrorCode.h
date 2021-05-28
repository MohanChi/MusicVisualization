#pragma once

typedef  long  DBStatus;

#define SQLITE_SUCCESS                        0x00000000
#define OPEN_SQLITE_DB_FAILED                 0x00020000
#define OPEN_SQLITE_DB_EXCEPTION              0x00020001
#define SQLITE_FILE_NAME_IS_NULL              0x00020002
#define SQLITE_CLOSED_FAILED                  0x00020003
#define SQLITE_CLOSED_EXCEPTION               0x00020004
#define SQLITE_EXCUTE_FALIED                  0x00020006
#define SQLITE_EXCUTE_EXCEPTION               0x00020006

struct DBResult
{
	char **result;
	int row;
	int column;
};