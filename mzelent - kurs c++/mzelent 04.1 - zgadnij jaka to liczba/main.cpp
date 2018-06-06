#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba;

int main()
{
    cout << "Witaj! Pomyslaalem sobie liczbe od 1..100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    cout << liczba << endl;

    system("pause");
    return 0;
}
