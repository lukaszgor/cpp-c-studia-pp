#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int liczba, los, ileprob=0;

int main()
{
    cout << " Witaj!" << endl;
    cout << " Pomyslalem sobie liczbe od 1 do 100." << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(los!=liczba)
    {
        ileprob++;
        cout << " Zgadnij jaka (to Twoja " << ileprob << " proba): ";
        cin >> los;

        if(los==liczba)
        cout << " Udalo sie! Wygrywasz w " << ileprob << " probie." << endl << endl;

        else if(los<liczba)
        cout << " To za malo!" << endl;

        else if(los>liczba)
        cout << " To za duzo!" << endl;
    }

    system("pause");
    return 0;
}
