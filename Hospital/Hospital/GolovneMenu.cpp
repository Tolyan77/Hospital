#include "GolovneMenu.h"
#include <iostream>
using namespace std;
int Choise()
{
	int choise = 0;
	cout << "\n\n\t1 - new atient\n\n\t2 - Viewing patients\n\tEnter :";
	cin >> choise;
	return choise;
}
