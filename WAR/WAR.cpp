// WAR.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include <iostream>
#include <string>
#include "Card.h"
#include "Player.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Card first, second;
	cout << " You have a " << first.get_rank() << " of " << first.get_suit() << endl;
	cout << " and a " << second.get_rank() << " of " << second.get_suit() << endl;


	system("pause");
	return 0;
}

