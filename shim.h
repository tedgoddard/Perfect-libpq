#if __has_include("libpq-fe.h")
#include "libpq-fe.h"
#elif __has_include("/usr/local/include/libpq-fe.h")
#include "/usr/local/include/libpq-fe.h"
#elif __has_include("/Applications/Postgres.app/Contents/Versions/latest/include/libpq-fe.h")
#include "/Applications/Postgres.app/Contents/Versions/latest/include/libpq-fe.h"
#elif __has_include("/usr/local/pgsql/include/libpq-fe.h")
#include "/usr/local/pgsql/include/libpq-fe.h"
#endif
