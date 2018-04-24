#include<iostream>
#include<cstdlib>
using namespace std;

void fibonacci(int n)
{
     long long a = 0, b = 1;

     for(int i=0;i<n;i++)
     {
            cout<<b<<" ";
            b += a;
            a = b-a;
     }
}

int main()
{
    int n;

    cout<<"Ile liczb ci¹gu fibonacciego: ";
    cin>>n;

    fibonacci(n);

    system("pause");
    return 0;
}
