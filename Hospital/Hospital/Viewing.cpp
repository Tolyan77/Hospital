#include "Viewing.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void Viewing(string NameHospital)
{
	ifstream Viewing;
	Viewing.open(NameHospital);
	int numberPerson;
	char test;
	while (Viewing.get(test)) {
		cout << test;
	}
	Viewing.close();
}
