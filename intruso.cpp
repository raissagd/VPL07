#include "intruso.hpp"
/*
Exemplo:
Entrada:
2
1 7 3 9 0 8 5 6 2 4 B C E A E B -> contando os espaços em branco, 30 no total. Cada elemento é acessado com indíce de 2 em 2
9 0 7 5 8 4 6 2 3 1 E C C B D A

Saída:
3 8 4 7 2 9

*/

void Intruso::set_senha_vazada(std::string vazou)
{
    this->senhas.push_back(vazou);
}

std::string Intruso::crack_senha(int num_entradas)
{
    int num_amostras = num_entradas;
    std::string senhaFinal;
    std::string senha1, senha2, senha3;
    // i[0] returns the whole string pointed to by iterator i while i[0][0] returns
    // the first character of the string even if the string is empty

    for (int i = 20; i <= 30; i = i + 2)
    {
        if (senhas[0][i] == 'A')
        {
            senha1 += senhas[0][0];
            senha1 += senhas[0][2];
        }

        else if (senhas[0][i] == 'B')
        {
            senha1 += senhas[0][4];
            senha1 += senhas[0][6];
        }

        else if (senhas[0][i] == 'C')
        {
            senha1 += senhas[0][8];
            senha1 += senhas[0][10];
        }

        else if (senhas[0][i] == 'D')
        {
            senha1 += senhas[0][12];
            senha1 += senhas[0][14];
        }

        else if (senhas[0][i] == 'E')
        {
            senha1 += senhas[0][16];
            senha1 += senhas[0][18];
        }
    }
    //------------------------------------------------------------------------------------------//
    for (int i = 20; i <= 30; i = i + 2)
    {
        if (senhas[1][i] == 'A')
        {
            senha2 += senhas[1][0];
            senha2 += senhas[1][2];
        }

        else if (senhas[1][i] == 'B')
        {
            senha2 += senhas[1][4];
            senha2 += senhas[1][6];
        }

        else if (senhas[1][i] == 'C')
        {
            senha2 += senhas[1][8];
            senha2 += senhas[1][10];
        }

        else if (senhas[1][i] == 'D')
        {
            senha2 += senhas[1][12];
            senha2 += senhas[1][14];
        }

        else if (senhas[1][i] == 'E')
        {
            senha2 += senhas[1][16];
            senha2 += senhas[1][18];
        }
    }

    //-----------------------------------------------------------------------------------------------//

    for (int i = 20; i <= 30; i = i + 2)
    {
        if (senhas[2][i] == 'A')
        {
            senha3 += senhas[2][0];
            senha3 += senhas[2][2];
        }

        else if (senhas[2][i] == 'B')
        {
            senha3 += senhas[2][4];
            senha3 += senhas[2][6];
        }

        else if (senhas[2][i] == 'C')
        {
            senha3 += senhas[2][8];
            senha3 += senhas[2][10];
        }

        else if (senhas[2][i] == 'D')
        {
            senha3 += senhas[2][12];
            senha3 += senhas[2][14];
        }

        else if (senhas[2][i] == 'E')
        {
            senha3 += senhas[2][16];
            senha3 += senhas[2][18];
        }
    }

    //-----------------------------------------------------------------------------------------------//

    /*
    amostra para eu ter uma ideia de como implementar a lógica de comparação:

    39 08
    23 84
    31 85
    */

    if (num_amostras == 2)
    {
        for (int i = 0; i <= 10; i = i + 2)
        {
            if (senha1.at(i) == senha2.at(i))
            {
                senhaFinal += senha1.at(i);
                senhaFinal += " ";
            }
            else if (senha1.at(i) == senha2.at(i + 1))
            {
                senhaFinal += senha1.at(i);
                senhaFinal += " ";
            }
            else if (senha1.at(i + 1) == senha2.at(i))
            {
                senhaFinal += senha1.at(i + 1);
                senhaFinal += " ";
            }
            else if (senha1.at(i + 1) == senha2.at(i + 1))
            {
                senhaFinal += senha1.at(i + 1);
                senhaFinal += " ";
            }
        }
    }

    else if (num_amostras == 3)
    {
        for (int i = 0; i <= 10; i = i + 2)
        {
            if ((senha1.at(i) == senha2.at(i)) && (senha1.at(i) == senha3.at(i)) && (senha2.at(i) == senha3.at(i)))
            {
                senhaFinal += senha1.at(i);
                senhaFinal += " ";
            }
            else if ((senha1.at(i + 1) == senha2.at(i)) && (senha1.at(i + 1) == senha3.at(i)) && (senha2.at(i) == senha3.at(i)))
            {
                senhaFinal += senha1.at(i + 1);
                senhaFinal += " ";
            }
            else if ((senha1.at(i) == senha2.at(i + 1)) && (senha1.at(i) == senha3.at(i)) && (senha2.at(i + 1) == senha3.at(i)))
            {
                senhaFinal += senha1.at(i);
                senhaFinal += " ";
            }
            else if ((senha1.at(i) == senha2.at(i)) && (senha1.at(i) == senha3.at(i + 1)) && (senha2.at(i) == senha3.at(i + 1)))
            {
                senhaFinal += senha1.at(i);
                senhaFinal += " ";
            }
            else if ((senha1.at(i + 1) == senha2.at(i + 1)) && (senha1.at(i + 1) == senha3.at(i)) && (senha2.at(i + 1) == senha3.at(i)))
            {
                senhaFinal += senha1.at(i + 1);
                senhaFinal += " ";
            }

            else if ((senha1.at(i) == senha2.at(i + 1)) && (senha1.at(i) == senha3.at(i + 1)) && (senha2.at(i + 1) == senha3.at(i + 1)))
            {
                senhaFinal += senha1.at(i);
                senhaFinal += " ";
            }
            else if ((senha1.at(i + 1) == senha2.at(i)) && (senha1.at(i + 1) == senha3.at(i + 1)) && (senha2.at(i) == senha3.at(i + 1)))
            {
                senhaFinal += senha1.at(i + 1);
                senhaFinal += " ";
            }
            else if ((senha1.at(i + 1) == senha2.at(i + 1)) && (senha1.at(i + 1) == senha3.at(i + 1)) && (senha2.at(i + 1) == senha3.at(i + 1)))
            {
                senhaFinal += senha1.at(i + 1);
                senhaFinal += " ";
            }
        }
    }

    return senhaFinal;
}