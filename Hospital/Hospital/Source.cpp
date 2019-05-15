#include <iostream>
#include "GolovneMenu.h"
#include <string>
#include "Add.h"
#include <fstream>
#include "Viewing.h"
int NumberPerson = 1;
using namespace std;
struct Person {
public: 

};
int main()
{
	cout << "	\n\t<<<<<<<<<<<<<<<<<<<< Hospital >>>>>>>>>>>>>>>>>>>" << endl;
	string NameHospital = "PersonHospital.txt";
	
	int choise = Choise();
	if (choise == 1)
	{
		AddPerson(NameHospital);
	}
	else if (choise == 2)
	{
		Viewing(NameHospital);
	}



	system("pause");
	return 0;
}