#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int Tablica[6];
int main()
{
    srand( time( NULL ) );
    /*

    liczba = (( std::rand() % 49 ) + 1 );
    std::cout << "Wylosowanie 1: " <<(( std::rand() % 49 ) + 1 ) << std::endl;
    std::cout << "Wylosowanie 2: " <<(( std::rand() % 49 ) + 1 ) << std::endl;
    std::cout << "Wylosowanie 3: " <<(( std::rand() % 49 ) + 1 ) << std::endl;
    std::cout << "Wylosowanie 4: " <<(( std::rand() % 49 ) + 1 ) << std::endl;
    std::cout << "Wylosowanie 5: " <<(( std::rand() % 49 ) + 1 ) << std::endl;
    std::cout << "Wylosowanie 6: " <<(( std::rand() % 49 ) + 1 ) << std::endl;


      int liczba1 = (( std::rand() % 2 ) + 1 );
    std::cout << "Wylosowanie pierwsze: " << liczba1 << std::endl;
     int liczba2 = (( std::rand() % 2 ) + 1 );
    std::cout << "Wylosowanie drugie: " << liczba2 << std::endl;
    int liczba3 = (( std::rand() % 2 ) + 1 );
    std::cout << "Wylosowanie trzecie: " << liczba3 << std::endl;
    int liczba4 = (( std::rand() % 49 ) + 1 );
    std::cout << "Wylosowanie czwarte: " << liczba4 << std::endl;
    int liczba5 = (( std::rand() % 49 ) + 1 );
    std::cout << "Wylosowanie piate : " << liczba5 << std::endl;
    int liczba6 = (( std::rand() % 49 ) + 1 );
    std::cout << "Wylosowanie szoste  : " << liczba6 << std::endl;

//*/

for (int i=1;i<6;i++){
    int liczba=rand()%2+1;
    cout<<liczba;

}

    return 0;
}
