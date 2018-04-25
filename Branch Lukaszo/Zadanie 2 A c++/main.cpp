#include <iostream>

using namespace std;

unsigned short a;
unsigned int b;

int main()
{

  a=sizeof(unsigned long);
  cout<<" iloœci bajtowe = "<<a<<endl;
  a=0xffff;
  b=0xffff;
  cout<<"         16b    32"<<endl;
  cout<<" Przed dodaniem 1: "<<a<<b<<endl;
  a++;b++;
  cout<<"Po dodaniu 1 :    "<<a<<"   "<<b<<endl;


    return 0;
}
