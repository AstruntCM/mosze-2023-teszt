#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // A const hibásan lett megadva NELEMENTS helyett N_ELEMENTS kellene használni
    std::cout << '1-100 ertekek duplazasa' // A sor végéről hiányzik a pontosvessző, emelett hibásan lett megadva a string idézőjelei
    for (int i = 0;) // A for ciklus szintaxisa hibás, hiányzik maga a feltétel és a léptetés
    {
        b[i] = i * 2; // 0-val való indulás miatt nem helyes a duplázás, helyette (i + 1) * 2 kellene
    }
    for (int i = 0; i; i++) // Hibás a feltétel megadása, hiányzik a N_ELEMENTS
    {
        std::cout << "Ertek:" // Hiányzik a pontosvessző a sor végéről
    }    
    std::cout << "Atlag szamitasa: " << std::endl; // Hiányzik a megjelenítésnél hogy hogyan lesz kiszámolva az átlag
    int atlag; // Az atlag valtozonak nem helyes a tipusa, int helyett float vagy double kellene, nem megfelelő inicializálás
    for (int i = 0; i < N_ELEMENTS, i++) // feltétel megadása után sima vessző helyett pontosvessző kell
    {
        atlag += b[i] // Sor végéről hiányzik a pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    // Hiányzik a dinamikusan foglalt tömb felszabadítása
    return 0;
}
