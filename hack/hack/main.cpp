#include "info.h"
#include "database.h"

void main() {
	cout << "< CREATE DBMS >" << endl;

	Database database;
	int check;
	cin >> check;

	if(check == 1) {
		database.Insert("testetest11","testsets2");
	} else if(check == 2) {
		database.View();
	}
}