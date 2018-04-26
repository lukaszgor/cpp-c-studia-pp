#include <iostream>
#include <functional>
#include <cstdio>

using namespace std;

int main()
{
    int a, b, c;

    cout << " Wprowadz dzielna: ";
    cin >> a;
    cout << " Wprowadz dzielnik: ";
    cin >> b;

    c=a/b;

    if (modulus < int >()(a,b)==0)
    {
        cout << endl << " Wynik dzielenia: " << c << endl << endl;
    }
    else
    {
        cout << ('\t') << "Reszta z dzielenia: " << modulus <int>()(a,b) << endl << endl;
    }
    return 0;
}
