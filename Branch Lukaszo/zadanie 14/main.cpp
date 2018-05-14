#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int ile;
clock_t start,stop;
double czas;
int main()
{
    cout << "Ile liczb w tablicy?" << endl;
    cin>> ile;
    int*tablica;
    tablica = new int[ile];
    start = clock();
    for(int i=0;i<ile;i++){
        tablica[i]=i;
        tablica[i]+=50;
    }
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Czas zapisu(bez  wskaznika)  "<<czas<<endl;
    delete[] tablica;
    tablica = new int[ile];
    int*p=tablica;
    start=clock();
    for(int i=0;i<ile;i++){
        *p =i;
        *p +=50;
        p++;
    }
stop=clock();
czas=(double)(stop-start)/CLOCKS_PER_SEC;
cout<<"Czas zapisu z wskaznikiem   :"<<czas<<endl;
delete[] tablica;

    return 0;
}
