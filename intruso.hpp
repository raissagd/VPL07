#include <iostream>
#include <string>
#include <vector>

class Intruso
{
    /*Continue a implementação da classe Intruso*/
    std::vector<std::string> senhas;

public:
    void set_senha_vazada(std::string vazou);
    std::string crack_senha(int num_entradas);
};