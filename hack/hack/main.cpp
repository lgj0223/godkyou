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
		char column1[30], column2[30];

		cout << "ù��° ���� �Է��ϼ���";
		cin.getline(column1,30);

		cout << "�ι�° ���� �Է��ϼ���";
		cin.getline(column2,30);

		database.Insert(column1,column2);
	} else if(check == 2) {
		database.View();
	}
}