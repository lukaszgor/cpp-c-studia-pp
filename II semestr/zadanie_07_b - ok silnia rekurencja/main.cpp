#include <cstdlib>
#include <iostream>

using namespace std;

long silnia (int n)

{
    if(n<2)
    return 1;

    return n*silnia(n-1);
}

int main()
{
    int n;

    cout << " Podaj liczbe z ktorej policze silnie: ";
    cin >> n;
    cout << " n! = " << silnia(n) << endl << endl;

    system("pause");

    return 0;
}
