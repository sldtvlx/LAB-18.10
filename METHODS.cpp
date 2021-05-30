#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
#include "MONEY.h"

Money::Money(int r, long int c)
{
	rub = r;
	cop = c;
	double co = c;
	sum = r + co / 100;
}

double Money::Get()
{
	return sum;
}

void Money::Print()
{
	cout << "\nРубли - " << rub << ", копейки - " << cop;
}
