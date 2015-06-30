#include "database.h"

void Database::Insert(string column1, string column2) {
	ofstream File;
	File.open("database.txt",ios::app);
	File << line++ << NULL << column1 << NULL << column2 << endl;
}

void Database::View() { // txt 파일 출력 (select * from table)
	char ch;
	fstream File;

	system("cls");

	File.open("database.txt",ios::in);
	while( File.get(ch) ) {
		cout << ch;
	}
}

void Database::GetInfo() {
	fstream File;
	line = 0;
	File.open("database.txt",ios::in);

	while(File >> tableColumn[line].column1 >> tableColumn[line].column2) {
		line++;
	}
}