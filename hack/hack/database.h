#include "info.h"

typedef struct {
	string column1; // �÷�1
	string column2; // �÷�2
	int order; // ���� (define �� info.h ��)
} column;

class Database { 
public:
	column *tableColumn;

	void Insert(string column1, string column2);
	void View();
	int LineCheck();
};

void Database::Insert(string column1, string column2) {
	ofstream File;
	int line = 1;

	File.open("database.txt",ios::app);
	File << line++ << "\t" << column1 << "\t" << column2 << endl;
}

void Database::View() { // txt ���� ��� (select * from table)
	char ch;
	fstream File;
	int line;
	system("cls");

	File.open("database.txt",ios::in); 
	while( File.get(ch) ) {
		line++;
		cout << ch;
	}
}

int Database::LineCheck() { 
	char ch;
	fstream File;
	int line;

	File.open("database.txt",ios::in); 
	while( File.get(ch) ) {
		line++;
		cout << ch;
	}

	return line;
}