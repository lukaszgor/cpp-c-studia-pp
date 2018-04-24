#include <iostream>

using namespace std;

unsigned short a;
unsigned int b;

int main()
{
a=sizeof(unsigned long);
cout<<"Ilosc Bajtow =  "<<a<<endl<<endl;
a=0;
b=0;
cout<<"    16b    32b  "<<endl;
cout<<"Przed odejmowaniem 1:  "<<a<<"    "<<b<<endl<<endl;
a--;b--;
cout<<" po odejmowaniu 1 :  "<<a<<"   "<<b<<endl;



    return 0;
}
