#include <iostream>
#include "intruso.hpp"

int main()
{
    int num_entradas, i;
    std::string senha;
    Intruso intruso;

    std::cin >> num_entradas;
    std::cin.ignore();

    if (num_entradas == 2)
    {
        for (i = 0; i < 3; i++)
        {
            std::getline(std::cin, senha);
            intruso.set_senha_vazada(senha);
        }
        std::cout << intruso.crack_senha(num_entradas) << std::endl;
    }
    else if (num_entradas == 3)
    {
        for (i = 0; i <= 3; i++)
        {
            std::getline(std::cin, senha);
            intruso.set_senha_vazada(senha);
        }
        std::cout << intruso.crack_senha(num_entradas) << std::endl;
    }
    return 0;
}