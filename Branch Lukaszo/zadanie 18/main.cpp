#include <iostream>

using namespace std;

int main()
{
    int zmienna1= 213;
    int tablica[]={1,2,3,4,5,6,7,8,9,10};
    struct{
    int liczba;
    long long duzaLiczba;

    }struktura;
    cout<<"Adres zmienna1="<&zmienna1;

    cout<<"("<<(int)&zmienna1<<")"<<endl;

    cout<<"Adres tablica="<<&tablica;
    cout<<"("<<(int)&tablica<<")"<<endl;
    cout<<"Adres tablica[0]="<<&tablica[0];
    cout<<"("<<(int)&tablica[0]<<")"<<endl;
    cout<<"Adres tablica[1]="<<&tablica[0];
    cout<<"("<<(int)&tablica[1]<<")"<<endl;

     cout<<"Adres struktura="<<&struktura;
    cout<<"("<<(int)&struktura<<")"<<endl;

     cout<<"Adres struktura.liczba="<<&(struktura.liczba);
    cout<<"("<<(int)&struktura.liczba<<")"<<endl;
    cout<<"Adres struktura.duzaLiczba="<<&(struktura.duzaLiczba);
    cout<<"("<<(int)&struktura.duzaLiczba<<")"<<endl;




    return (0);
}
