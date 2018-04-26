#include <iostream>

using namespace std;

int main()
{
    int liczba, wynik=1;

    cout << "Podaj liczbe, a policze silnie: ";
    cin >> liczba;
    cout << liczba << "! = ";

    if (liczba == 0) cout << "1\n";
    else
    {
    while (liczba > 0)
    {
    wynik *= liczba;
    liczba--;
    }
    cout << wynik << endl;
    }

//  system("PAUSE");
    return 0;
}
