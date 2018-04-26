#include <iostream>

using namespace std;

unsigned short a;
unsigned int b;

int main()

{
    a=sizeof(unsigned long);
    cout<<"Ilosc Bajtow = "<<a<< endl;
    a=0;
    b=0;
    cout<<"                           16b         32b  "<< endl;
    cout<<"Przed odejmowaniem 1:        "<<a<<"           "<<b<< endl;
    a--;b--;
    cout<<"Po odejmowaniu 1 :       "<<a<<"  "<<b<< endl<<endl<<endl;

    return 0;
}
