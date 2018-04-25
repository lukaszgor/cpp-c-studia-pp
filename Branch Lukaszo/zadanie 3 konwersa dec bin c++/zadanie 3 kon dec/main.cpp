#include <iostream>

using namespace std;
int r =0;

    void dec2bin(int a) {
    if(a!=0) dec2bin(a/2);
    if(a!=0) cout<<a%2;
}
int main()
{


    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    dec2bin(a);
    return 0;
}
