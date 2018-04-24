
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int liczba;

    cout << "wprowadz liczbe" << endl;
    cin >> liczba;

    if (liczba%2==0) //dzielenie modulo
        cout << "wpisana liczba jest parzysta" << endl;
    else
        cout << "wpisana liczba jest nieparzysta" << endl;

    system("PAUSE");
    return(0);
}
