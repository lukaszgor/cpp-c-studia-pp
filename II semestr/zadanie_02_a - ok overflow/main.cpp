#include <iostream>

using namespace std;

unsigned short a;
unsigned int b;

int main()

{
    a=sizeof(unsigned long);
    cout<<"Ilosc Bajtow = "<<a<< endl;
    a=0xffff;
    b=0xffffffff;
    cout<<"                    16b        32b"<< endl;
    cout<<"Przed dodaniem 1: "<<a<<" "<<b<< endl;
    a++;b++;
    cout<<"Po dodaniu 1 :        "<<a<<"          "<<b<< endl<<endl<<endl;

    return 0;
}
