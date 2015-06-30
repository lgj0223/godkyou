#include "info.h"

typedef struct {
	string column1; // 컬럼1
	string column2; // 컬럼2
	int order; // 정렬 (define 값 info.h 에)
} column;

class Database { 
public:
	column *tableColumn;
	int line;

	void Insert(string column1, string column2);
	void View();
	void GetInfo();
};

