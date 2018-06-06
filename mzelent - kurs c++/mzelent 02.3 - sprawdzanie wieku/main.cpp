#include <iostream>
#include <cstdlib>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat: ";
    cin >> wiek;

    if (wiek<18)
    {
        cout << "Nie jeste pelnoletni i nie mozesz zostac pezydentem." << endl << endl ;
    }

    else if ((wiek>18) && (wiek<35))
    {
        cout << "Jestes pelnoletni ale nie mozesz zostac prezydentem" << endl << endl;
    }

    else
    {
        cout << "Jestes pelnoletni i mozesz zostac prezydentem" << endl << endl;
    }

    system("pause");
    return 0;
}
