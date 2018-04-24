#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    do
    {
        if(a>b) a=a-b;
        else b=b-a;
    }
    while(a!=b);

    cout << "Najwiekszy wspolny dzielnik: " << a << endl;

    system("PAUSE");

    return 0;
}
