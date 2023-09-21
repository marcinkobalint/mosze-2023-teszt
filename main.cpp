#include <iostream>

constexpr int N_ELEMENTS = 100; 

int main()
{
    int *b = new int[N_ELEMENTS]; //javítva #1
    std::cout << '1-100 ertekek duplazasa' << std::endl; //javítva #2
    for (int i = 0; i < N_ELEMENTS; i++) //javítva#3
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) //javítva#4
    {
        std::cout << "Ertek:" << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; //javítva#5
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i]; //javítva#6
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;  //javítva#7
    std::cout << "Mi az piros és roncsolja a fogat? Tégla." << std::endl;
    return 0;
}
