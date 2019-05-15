#include "Add.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void AddPerson(string NameHospital)
{
	ofstream person;
	person.open(NameHospital, ofstream::app);
	if (!person.is_open()) { cout << "\n\tError file!" << endl; }
	else {
		system("cls");
		string name, firstname, addr, number;
		cout << "\n\t\t\tPlease do not click ENTER this could hurt the program!!!" << endl;
		cout << "\n\tEnter name person :";
		cin >> name;
		cout << "\n\tEnter firsname person :";
		cin >> firstname;
		cout << "\n\tEnter address person :";
		cin >> addr;
		cout << "\n\tEnter number phone person:";
		cin >> number;
		person << name << " ";
		person << firstname << " ";
		person << addr << " ";
		person << number << "*\n";
    }
	person.close();
}



















/*int numberPerson;
	bool contine = true;
	char test;
	cout << "\n\tEnter assign a number person:";
	cin >> numberPerson;
	for (int i = 0; i < 1; i++) {
		bool Audit = false;
		ifstream person;
		person.open(NameHospital);
		while (person.get(test)) {
			if (int(test) == 32)
			{
				Audit = true;
				person.get(test);
			}
			if (Audit == true)
			{
				if (test == numberPerson)
				{
					cout << "\n\tThis number already exists!!!" << endl;
					contine = false;
				}
				else
				{
					Audit = false;
				}
			}
		}
		person.close();
	}*/