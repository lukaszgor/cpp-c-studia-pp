// bakteria nie musi zapraszac do kina by sie rozmnazac <- kurwa leze :>

#include <iostream>
#include <cstdlib>

using namespace std;

int populacja=1;
int godzin=0;

int main()
{
    while (populacja<=1000000000)
    //do
    {
        //godzin=godzin+1;
        godzin++;
        populacja=populacja*2;
    }
    //while(populacja<=1000000000);

    cout << "Minelo godzin: " << godzin << endl;
    cout << "Liczba bakteri: " << populacja << endl << endl;

    system("pause");
    return 0;
}
