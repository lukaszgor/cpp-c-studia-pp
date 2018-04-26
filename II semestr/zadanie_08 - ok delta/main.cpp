#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

double delta,a,b,c,deltad,x1,x2,x0,deltau;

int main()
{
    cout << " Program obliczajacy pierwiastek rownania kwadratowego ax^+bx+c=0" << endl;
    cout << " Podaj a:     ";
    cin >> a;
    cout << " Podaj b:     ";
    cin >> b;
    cout << " Podaj c:     ";
    cin >> c;

    delta=(b*b)-4*(a*c);

    cout << endl << " Delta =      ";
    cout << delta << endl;

    if (delta>0)
        {
            cout << " Pierwiastek z Delty =   ";
            deltad=sqrt(delta);
            cout << deltad << endl;
            x1=(-b-deltad)/2*a;
            x2=(-b+deltad)/2*a;
            cout << " x1 = " << x1 << endl;
            cout << " x2 = " << x2 << endl << endl;
        }

    if (delta==0)
        {
            x0=(-b)/(2*a);
            cout << " Gdy delta = 0, jest jedno rozwiazanie:" << endl;
            cout << " x1 = " << x0 << endl << endl;
        }

    if(delta<0)
        {
            cout << " Brak pierwiastka drugiego stopnia z liczby ujemnej." << endl;
            deltau=(-delta);
            cout << " Pierwiastek w postaci zespolonej: " << deltau << "i" << endl << endl;
        }

    system("pause");
    return 0;
}
