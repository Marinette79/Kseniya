#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;

	do
	{
		
		cout << endl;
		if ((a % 10 == 1 || a == 1) && (a != 11 && a % 100 != 11))
			cout << a << " рубль";

		if ((((a % 10) >= 2 && (a % 10) <= 4) || (a >= 2 && a <= 4)) && (a != 12 && a % 100 != 12) && (a != 13 && a % 100 != 13) && (a != 14 && a % 100 != 14))
			cout << a << " рубля";

		if (((a % 10) >= 5 && (a % 10) <= 9) || (a >= 5 && a <= 9) || (a % 10) == 0 || (a % 100 == 11) || a == 11 || (a % 100 == 12) || a == 12 || (a % 100 == 13) || a == 13 || (a % 100 == 14) || a == 14)
			cout << a << " рублей";
		a++;
	} while (a <= 150);


	return 0;


}