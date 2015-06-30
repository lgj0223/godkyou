#include "info.h"
#include "database.h"

void main() {
	cout << "< CREATE DBMS >" << endl;

	Database database;
	database.GetInfo(); // 현재 라인 수 체크

	int check;
	cin >> check;
	cin.ignore(1,'\n'); //cin 과 cin.getline의 \n 사용 방식이 다르므로 넣어줌. cin 으로 남아있는 \n 제거

	if(check == 1) {
		char column1[30], column2[30];

		cout << "첫번째 값을 입력하세요";
		cin.getline(column1,30);

		cout << "두번째 값을 입력하세요";
		cin.getline(column2,30);

		database.Insert(column1,column2);
	} else if(check == 2) {
		database.View();
	}
}