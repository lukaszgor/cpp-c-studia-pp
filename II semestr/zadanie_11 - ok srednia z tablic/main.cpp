#include <iostream>

using namespace std;

float tablica[4];
float suma;
float srednia;

int main()
{
    cout << " Podaj mi 5 ocen, a ja policze Ci srednia: " << endl << endl;
    cout << " Pierwsza ocena: ";
    cin >> tablica[0];
    cout << " Druga ocena:    ";
    cin >> tablica[1];
    cout << " Trzecia ocena:  ";
    cin >> tablica[2];
    cout << " Czwarta ocena:  ";
    cin >> tablica[3];
    cout << " Piata ocena:    ";
    cin >> tablica[4];

    for (int i=0; i<4; i++)

    suma += tablica[i];
    cout << endl << " Suma ocen wynosi: " << suma << endl;

    srednia = suma/5;
    cout << " Srednia Twoich ocen to: " << suma << "/5 = " << srednia << endl;

    return 0;
}
