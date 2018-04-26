#include <iostream>
#include <cstdlib>

using namespace std;
unsigned int liczba, reszta, r=0;

int main()
{
    cout << " Podaj liczbe naturalna w systemie dziesietnym to: " ;
    cin >> liczba;
    cout << " Podana liczba w systemie binarnym to: ";
    do  {
            reszta=liczba%2;
            cout << " " << reszta;
            r=r+reszta;
            liczba=(liczba-reszta)/2;
        }

        while (liczba !=0);
        cout << endl << endl << " Ilosc jedynek w liczbie binarnej wynosi: " << r << endl << endl;

    system ("pause");
    return 0;
}
