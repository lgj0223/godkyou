#include "info.h"

typedef struct {
	string column1; // �÷�1
	string column2; // �÷�2
	int order; // ���� (define �� info.h ��)
} column;

class Database { 
public:
	column tableColumn[1000];
	double line;

	void Insert(string column1, string column2);
	void View();
	void GetInfo();
};

