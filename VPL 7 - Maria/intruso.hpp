#include <iostream>
#include <string>
#include <vector>

class Intruso
{
    std::vector<std::string> senhas;
    std::string senhaFinal;

public:
    void set_senha_vazada(std::string vazou);
//    void concatena_senha(char senha);
    std::string crack_senha(int num_entradas);
};