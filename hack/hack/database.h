#include "info.h"

typedef struct {
	int column1; // �÷�1
	string column2; // �÷�2
	int order; // ���� (define �� info.h ��)
} column;

class Database { 
public:
	column tableColumn[1000];
	int line;

	void Insert(int column1, string column2);
	void View();
	void GetInfo();
};

