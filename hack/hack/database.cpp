#include "database.h"

void Database::Insert(string column1, string column2) {
	ofstream File;
	File.open("database.txt",ios::app);
	File << line++ << column1 << column2 << endl;
	File.close();
}

void Database::View() { // txt 파일 출력 (select * from table)
	char ch;
	fstream File;

	system("cls");

	File.open("database.txt",ios::in);
	while( File.get(ch) ) {
		cout << ch;
	}
	File.close();
}

void Database::GetInfo() {
	fstream File;
	line = 0;
	File.open("database.txt",ios::in);
	double cline;
	char readValue[68];

	while(File >> readValue) {
		cout << readValue;
		line++;
	}
	File.close();
}