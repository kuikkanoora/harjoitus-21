/*************************************************************************************************************************************************************
*Teht‰v‰: Harjoitus21
*Tekij‰: Noora Kuikka
*PVM: 19.11.2013
*Kuvaus:
*Muunna harjoitus 11 niin, etta k‰yt‰t seuraavia aliohjelmia:
*
*int KysyValinta(void);
*
*-> KysyValinta paluttaa k‰ytt‰j‰n antaman valintanumeron (0-6)
*
*double Summa(float luku1, int luku2);
*
*-> Summa laskee yhteen annetut tiedot ja palauttaa summan p‰‰ohjelmaan
*Versio 1.0 H4719 19.11.2013
**************************************************************************************************************************************************************/

#include <iostream>
using namespace std;

int KysyValinta(void);
double Summa(int luku1, int luku2);

int main()

{
    int choice;
	int luku1;
	int luku2;
    int difference;
    int product;
    int remainder;
	double result;


	do
    {     
	  choice = KysyValinta();
        if (choice == 1)
        {
			   cout << "Enter two integers: ";
			   cout << "\n1. ";
			   cin >> luku1;
			   cout << "\n2. ";
			   cin >> luku2;
		       result = Summa(luku1, luku2);
			   cout << "\nSum: " << result << "\n" << "\n";

        }
           
        else if (choice == 2)
		{
           cout << "Enter two integers: ";
		   cout << "\n1. ";
           cin >> luku1;
		   cout << "\n2. ";
		   cin >> luku2;
           difference = luku1 - luku2;
		   cout << "\nDifference: " << difference << "\n" << "\n";
		}
        else if (choice == 3)
		{
           cout << "Enter two integers: ";
		   cout << "\n1. ";
		   cin >> luku1;
		   cout << "\n2. ";
		   cin >> luku2;
           product = luku1 * luku2;
		   cout << "\nProduct: " << product << "\n" << "\n";
		}
        else if (choice == 4)
		{
           cout << "Enter two integers: ";
		   cout << "\n1. ";
           cin >> luku1; 
		   cout << "\n2. ";
		   cin >> luku2;
           double division = (double)luku1/luku2;
		   cout << "\nDivision: " << division << "\n" << "\n";
		}
        else if (choice == 5)
		{
           cout << "Enter two integers: ";
		   cout << "\n1. ";
           cin >> luku1;
		   cout << "\n2. ";
		   cin >> luku2;
           remainder = luku1 % luku2;
		   cout << "\nRemainder: " << remainder << "\n" << "\n";
		}
        else if (choice == 6)
		{
           cout << "Exiting program...\n";
           return 0;
		}
		else
		{
           cout << "\nNot a valid input.\n";
           cout << "\nEnter a number from 1-6 and try again: \n";
        }
	}
	while (choice != 6);

	return 0;
}

int KysyValinta()
{
	int choice;

        cout << "Calculator\n";
        cout << "1. Sum\n";
        cout << "2. Difference\n";
        cout << "3. Product\n";
        cout << "4. Division\n";
        cout << "5. Remainder\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6) and press return: ";
        
        cin >> choice;

	return choice;
}

double Summa(int luku1, int luku2)
{
	double result;

	result = luku1 + luku2;

	return result;
}
