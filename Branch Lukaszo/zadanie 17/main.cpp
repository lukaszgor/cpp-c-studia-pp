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
stop=clock();
czas=(double)(stop - start) / CLOCKS_PER_SEC;
cout << "Czas zapisu Tablica dynamiczna:" << czas << endl;
  start=clock();
 if(n<0)
        cout<<endl<<"milego dnia"<<endl;
    else{
        fibo=new long double[n];
        p=fibo;
        *p=1;
        *(++p)=1;
        p++;
        for(int i=2;i<n;i++){
         *(p+(i-2))=*(p+(i-3))+*(p+(i-4));
        }
        p=fibo;
        p=&fibo[n-1];

        delete []fibo;
stop=clock();
czas=(double)(stop - start) / CLOCKS_PER_SEC;
cout << "Czas zapisu wskazniki:" << czas << endl;
    }
    return 0;
}
