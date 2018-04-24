#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

double delta,a,b,c,deltak,xj,xd,xo,deltau;

int main()
{
  cout<<"Program oblicza pierwiastek rownania kwadratowego ax^+bx+c=0"<<endl;
  cout<<"Podaj a   ";
  cin>>a;
  cout<<"Podaj b   ";
  cin>>b;
  cout<<"Podaj c   ";
  cin>>c;

 delta = (b*b)- 4*(a*c);


  cout<<"Delta =  ";
  cout<<delta<<"  ";


  if(delta > 0){
        deltak = pow(delta,0.5);
        cout<< "  Pierwiastek z Delty =   ";
        cout<< deltak;

         xj = (-b-deltak)/2*a;
         xd = (-b +deltak)/2*a;
        cout<<" x1 = "<<xj<<"   ";
        cout<<" x2 = "<<xd;
  }
  if(delta == 0)  {



         xo =(-b)/(2*a);
  cout<<" Jest jeden pierwiastek rzeczywisty = "<<xo;

  }
  if(delta < 0){
  cout<<"  Brak pierwiastow rzeczywistych (pierwiastki w postaci zespolonej )";



  deltau = (-delta);

  cout<<"Pierwiastek z  "<<deltau<<"i";




  }







  return 0;
}
