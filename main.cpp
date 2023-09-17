#include <iostream>

constexpr int N_ELEMENTS = 100; 

int main()
{
    int *b = new int[NELEMENTS]; hiba#1
    std::cout << '1-100 ertekek duplazasa' hiba#2
    for (int i = 0;) hiba#3
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) hiba#4
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; hiba#5
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] hiba#6
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    hiba#7
    return 0;
}
