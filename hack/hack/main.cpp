#include "info.h"
#include "database.h"

void main() {
	cout << "< CREATE DBMS >" << endl;

	Database database;
	database.GetInfo(); // ���� ���� �� üũ
	
	int check;
	cin >> check;
	cin.ignore(1,'\n'); //cin �� cin.getline�� \n ��� ����� �ٸ��Ƿ� �־���. cin ���� �����ִ� \n ����

	if(check == 1) {
		int column1;
		char column2[30];

		cout << "ù��° ���� �Է��ϼ��� : ";
		cin >> column1;
		cin.ignore(1,'\n');

		cout << endl << "�ι�° ���� �Է��ϼ��� : ";
		cin.getline(column2,30);

		database.Insert(column1,column2);
	} else if(check == 2) {
		database.View();
	}
}