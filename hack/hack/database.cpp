#include "database.h"

void Database::Insert(int column1, string column2) {
	ofstream File;
	File.open("database.txt",ios::app);
	File << line++ << '\0' << column1 << '\0' << column2 << endl;
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
	int cline;

	while(File >> cline >> tableColumn[line].column1 >> tableColumn[line].column2) {
		cout << tableColumn[line].column1 << endl;
		line++;
	}
	File.close();
}