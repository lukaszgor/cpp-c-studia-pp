#include <iostream>

using namespace std;

long double *fib,*p;
int n;

int main()
{
    cout<<"Ile liczb Fib chcesz wyznaczyc?";
    cin>>n;
    if(n<0)
        cout<<endl<<"milego dnia"<<endl;
    else{
        fib=new long double[n];
        p=fib;
        *p=1;
        cout<<endl<<"[0]->"<<(int)p<<endl;
        *(++p)=1;
        cout<<"[1]->"<<(int)p<<endl;
        p++;
        for(int i=2;i<n;i++){
            cout<<"{"<<i<<"}"<<(int)(p+(i-2))<<"--";
            cout<<(int)(p+(i-3))<<"+"<<(int)(p+(i-4))<<endl;
         *(p+(i-2))=*(p+(i-3))+*(p+(i-4));
        }

        p=fib;
        cout<<"adres 1 elementu"<<int(p)<<endl;
        p=&fib[n-1];
        cout<<"adres 1 elementu"<<int(p)<<endl;
        for(int i =0;i<n;i++){
            cout<<endl<<"Fib |"<<i+1<<"\  "<<*p;
            p++;
        }
        p=&fib[n-1];
        cout<<endl<<"zlota liczba"<<(*p)/(*(--p))<<endl;
        delete []fib;
        cout<<endl<<endl;
        main();



    }



    return 0;
}
