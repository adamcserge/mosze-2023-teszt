#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //rossz változónév 
    std::cout << '1-100 ertekek duplazasa'  //hiányzik a ;
    for (int i = 0;)    //hiányos paraméterek
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)   
    {
        std::cout << "Ertek:"   //csak a szöveget írja ki, az értéket nem, hiányzik a ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)    // , helyett ;
    {
        atlag += b[i]   //hiányzik a ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;  //nincs felszabadítva a memória
}
