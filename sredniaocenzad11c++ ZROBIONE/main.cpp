#include <iostream>

using namespace std;
float tablica[4];
float suma;
float srednia;
int main()
{
    cout << "Podaj 5 licz:" << endl;
    cin>>tablica[0];
    cin>>tablica[1];
    cin>>tablica[2];
    cin>>tablica[3];
    cin>>tablica[4];

for (int i = 0; i < 4; i++)
suma += tablica[i];
cout << "Suma liczb w tablicy wynosi: " << suma << endl;
srednia = suma/5;


    cout<<"srednia:  "<<srednia<<endl;


    return 0;
}
