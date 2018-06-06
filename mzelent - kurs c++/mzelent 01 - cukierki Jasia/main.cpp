#include <iostream>
#include <cstdlib>

using namespace std;

int uczniowie, cukierki, x, y;

int main()

{
    cout << "Ilu uczniow jest w Twojej klasie: ";
    cin >> uczniowie;
    cout << "Ile cukierkow kupila mama: ";
    cin >> cukierki;

    x = cukierki/(uczniowie-1);

    cout << endl << "Cukierkow dla kazdego ucznia: " << x;

    y = cukierki-x*(uczniowie-1);

    cout << endl << "Dla Jasia na wieczor zostanie "<< y <<" cukierkow." << endl << endl;

    system("pause");
    return 0;
}
