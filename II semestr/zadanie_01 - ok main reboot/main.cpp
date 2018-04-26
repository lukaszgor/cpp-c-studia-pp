#include <iostream>
#include <cstdlib>

using namespace std;
int x;

int main()
{
    cout << "Podaj x (by zakonczyc wpisz: 123): ";
    cin >> x;
    if(x==123)
        {
        system("pause");
        }
    else main();

    return 0;
}
