#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int main()
{

    int los, tab[6];
    srand(time(NULL));

    cout << "Wyniki losowania Lotto: ";

        {
        for(int i=0; i<6; i++)
            {
            los=(rand()%49)+1;
            int bylo=0;
            for(int j=0; j<i; j++)
            if(tab[j]==los)
            bylo=1;
            if(bylo)
            i--;

            else
            tab[i]=los;
            }
            for(int i=0; i<6; i++)
            {
            cout << tab [i] << " ";
            }

            cout << endl << endl;
        }

    system ("pause");
    return 0;
}
