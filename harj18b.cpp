/*HARJ 18 B Kirjan esimerki 7 - 14*/
#include <iostream>
using namespace std;
struct KOIRATIEDOT
{
		int ika;
	char nimi[20];
};
int main()
{
	const int MAX_KOIRA = 5;
	KOIRATIEDOT koira[MAX_KOIRA];

	int ind;
	for (ind = 0; ind < MAX_KOIRA; ind++)
	{
		cout << "Anna " << ind + 1
			<< " Koiran ik� ja nimi ";
		cin >> koira[ind].ika >> koira[ind].nimi;
		

	}
	cout << "koirien i�t ja nimet \n";
	for (ind = 0; ind < MAX_KOIRA; ind++)
	{
		cout << "Koiran " << ind + 1
			<< " nimi ja ik�: ";
		cout << koira[ind].ika << koira[ind].nimi << endl;
	

	}
		
	cout << "sortataan ... \n";
	for (int i = 0; i < MAX_KOIRA - 1; i++)
		for (int j = i + 1; j < MAX_KOIRA; j++)
			if (strcmp(koira[i].nimi, koira[j].nimi)>0)
			{ //cout << i << j << endl;
		KOIRATIEDOT tmp = koira[j];
		koira[j] = koira[i];
		koira[i] = tmp;
			}
	cout << "Koirien Tiedot lajiteltuna \n";
	for (ind = 0; ind < MAX_KOIRA; ind++)
	{
		cout << "Koiran " << ind + 1
			<< " nimi ja ik�: ";
		cout << koira[ind].ika  << koira[ind].nimi << endl;


	}
			}
			
			
	 

//UTILITY
	/*
#include <iostream>
using namespace std;

int main()
{

	const int MAX_TAULU = 4;
	int taulu[MAX_TAULU] = { 2, 7, 1, 3 };
	int ind;
	cout << "Taulukko ennen j�rjest\n";
	for (ind = 0; ind < MAX_TAULU; ind++)
	{
		cout << taulu[ind] << " ";
	}
	cout << endl;
	cout << "sortataan ... \n";
	for (int i = 0; i < MAX_TAULU - 1; i++)
		for (int j = i + 1; j < MAX_TAULU; j++)
			if (taulu[i] > taulu[j])
			{ //cout << i << j << endl;
				int tmp = taulu[j];
				taulu[j] = taulu[i];
				taulu[i] = tmp;
			}
	cout << "Taulukko j�rjest�misen j�lkeen\n";
	for (ind = 0; ind < MAX_TAULU; ind++)
	{
		cout << taulu[ind] << " ";
	}
	cout << endl;
			//cout << i << j << endl;
}
*/