#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; 
    std::cout << "1-100 ertekek duplazasa" << std::endl;

    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        b[i] = (i + 1) * 2;
    }

    std::cout << "Ertek: "; 
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        std::cout << b[i];

        if (i < N_ELEMENTS - 1) {std::cout << ", ";}
        
        else {std::cout <<" "<< std::endl;}       
    }    

    double atlag, szum = 0.0; 

    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        szum += b[i];
    }

    atlag = szum / N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b;

    return 0;
}
