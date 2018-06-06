#include <iostream>
#include <cstdlib>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w naszym banku!" << endl;
    cout << "Podaj numer PIN: ";
    cin >> PIN;

    if(PIN=="1729")
    {
        cout << "Poprawny PIN !" << endl << endl;
    }

//    if(PIN!="1729")
//    {
//       cout << "Niepoprawny PIN !";
//    }

    else
    {
        cout << "Niepoprawny PIN !" << endl << endl;
    }

    system("pause");
    return 0;
}
