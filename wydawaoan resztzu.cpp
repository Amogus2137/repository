

#include <iostream>
using namespace std;

int main()
{
	int kwota;
	int ile;
	int  i = 0;



	cout << "podaj reszte wyplacenia: ";
	cin >> kwota;

	

	int Nominaly[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	 
	while (kwota > 0) {
		if (kwota >= Nominaly[i]) {
			ile = kwota / Nominaly[i];


			kwota = kwota - (Nominaly[i] * ile);

			cout << Nominaly[i] << " " << "x" << " " << ile << endl;






		}
			i = i + 1;
	}

		return 0;



		








}

