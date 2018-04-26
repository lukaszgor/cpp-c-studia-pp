#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << " Ile liczb ciagu Fibonacciego chcesz poznac?: ";
    cin >> n;
    cin.sync();
    cin.clear();

    int* tablica = new int[n];
    if(n>=2)

    {
        tablica[0]=1;
        tablica[1]=1;
        cout << " Liczba " << "1" <<" = "<<tablica[0];
        cin.get();
        cout << " Liczba "<<"2"<<" = "<<tablica[1];
        cin.get();

        for(int i=2;i<n;i++)

        {
            tablica[i]=tablica[i-1]+tablica[i-2];
            cout << " Liczba " << i+1 << " = " << tablica[i];
            cin.get();
        }
    }
        else
        cout << endl << endl;

    return 0;
}
