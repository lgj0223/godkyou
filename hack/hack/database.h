#include "info.h"

typedef struct {
	string column1; // 컬럼1
	string column2; // 컬럼2
	int order; // 정렬 (define 값 info.h 에)
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

void Database::View() { // txt 파일 출력 (select * from table)
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