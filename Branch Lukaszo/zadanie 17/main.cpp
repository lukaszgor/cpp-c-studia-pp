#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int ile;
clock_t start, stop;
double czas;
long double *fibo,*p;
 int main()
{
    int n = 1;
    cout<<"wpisz numer liczby Fibo: "<<endl;
    cin>>n;
    long long int fib[n];
    fib[0] = 1;
    fib[1] = 1;
    start=clock();
    for(int i=2; i<=n; i++)
    {
    fib[i] = fib[i-1] + fib[i-2];
    }
    for(int i=0; i<=n; i++)
    {
        //cout<<fib[i]<<", "<<endl;
    }
stop=clock();
czas=(double)(stop - start) / CLOCKS_PER_SEC;
cout << "Czas zapisu Tablica dynamiczna:" << czas << endl;

////////////////////////////////////////////// zad 16
  start=clock();
 if(n<0)
        cout<<endl<<"milego dnia"<<endl;
    else{
        fibo=new long double[n];
        p=fibo;
        *p=1;
        //cout<<endl<<"[0]->"<<(int)p<<endl;
        *(++p)=1;
        //cout<<"[1]->"<<(int)p<<endl;
        p++;
        for(int i=2;i<n;i++){
            //cout<<"{"<<i<<"}"<<(int)(p+(i-2))<<"--";
            //cout<<(int)(p+(i-3))<<"+"<<(int)(p+(i-4))<<endl;
         *(p+(i-2))=*(p+(i-3))+*(p+(i-4));
        }

        p=fibo;
        //cout<<"adres 1 elementu"<<int(p)<<endl;
        p=&fibo[n-1];
        //cout<<"adres 1 elementu"<<int(p)<<endl;
        for(int i =0;i<n;i++){
            //cout<<endl<<"Fib |"<<i+1<<"\  "<<*p;
            p++;
        }
        p=&fibo[n-1];
        //cout<<endl<<"zlota liczba"<<(*p)/(*(--p))<<endl;
        delete []fibo;
        //cout<<endl<<endl;
stop=clock();
czas=(double)(stop - start) / CLOCKS_PER_SEC;
cout << "Czas zapisu wskazniki:" << czas << endl;

    }



//////////////////////////////////////////////




    return 0;
}
