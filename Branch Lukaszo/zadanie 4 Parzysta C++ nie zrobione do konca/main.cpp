#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b;

    cout << "Sprawdze, czy suma dwoch liczb jest parzysta." << endl << endl;
    cout << "Wprowadz pierwsza liczbe: " ;
    cin >> a;
    cout << "Wprowadz druga liczbe: " ;
    cin >> b;

    if ((a+b)%2==0)
    cout << "Suma podanych liczb jest parzysta." << endl << endl;

    else
    cout << "Suma podanych liczba jest nieparzysta." << endl << endl;

    system ("pause");
    return(0);
}
