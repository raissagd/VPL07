#include "intruso.hpp"

// 1 7 3 9 0 8 5 6 2 4 B C E A E B   SENHA 0 
// 9 0 7 5 8 4 6 2 3 1 E C C B D A   SENHA 1
// 1 2 3 4 5 6 7 8 9 0 B D B D A E   SENHA 2
// SAIDA 3 8 4 7 2 9

void Intruso::set_senha_vazada(std::string vazou)
{
	this->senhas.push_back(vazou);
}

//void Intruso::concatena_senha(char senha) {
//	senhaFinal += senha + " ";
//}

std::string Intruso::crack_senha(int num_entradas)
{
	// ARMAZENA OS VALORES DAS LETRAS PRA CADA SENHA VAZADA
	std::vector<std::string> senha{ 10 };

	for (int j = 0; j < num_entradas; j++)
	{
		for (int i = 20; i <= 30; i = i + 2)
		{
			if (senhas[j][i] == 'A') {
				senha[j] += senhas[j][0];
				senha[j] += senhas[j][2];
			}

			else if (senhas[j][i] == 'B') {
				senha[j] += senhas[j][4];
				senha[j] += senhas[j][6];
			}

			else if (senhas[j][i] == 'C') {
				senha[j] += senhas[j][8];
				senha[j] += senhas[j][10];
			}

			else if (senhas[j][i] == 'D') {
				senha[j] += senhas[j][12];
				senha[j] += senhas[j][14];
			}

			else if (senhas[j][i] == 'E') {
				senha[j] += senhas[j][16];
				senha[j] += senhas[j][18];
			}
		}
	}

	// COMPARA AS SENHAS PRA TER A SENHA FINAL
	if (num_entradas == 2)
	{
		for (int i = 0; i <= 10; i = i + 2)
		{
			if ((senha[0].at(i) == senha[1].at(i)) || (senha[0].at(i) == senha[1].at(i + 1))) {
				senhaFinal += senha[0].at(i);
				senhaFinal += " ";
			}

			else if ((senha[0].at(i + 1) == senha[1].at(i)) || (senha[0].at(i + 1) == senha[1].at(i + 1))) {
				senhaFinal += senha[0].at(i + 1);
				senhaFinal += " ";
			}
		}
	}

	else if (num_entradas == 3)
	{
		for (int i = 0; i <= 10; i = i + 2)
		{
			if (((senha[0].at(i) == senha[1].at(i)) && (senha[0].at(i) == senha[2].at(i)) && (senha[1].at(i) == senha[2].at(i))) ||
				((senha[0].at(i) == senha[1].at(i + 1)) && (senha[0].at(i) == senha[2].at(i)) && (senha[1].at(i + 1) == senha[2].at(i))) ||
				((senha[0].at(i) == senha[1].at(i)) && (senha[0].at(i) == senha[2].at(i + 1)) && (senha[1].at(i) == senha[2].at(i + 1))) ||
				((senha[0].at(i) == senha[1].at(i + 1)) && (senha[0].at(i) == senha[2].at(i + 1)) && (senha[1].at(i + 1) == senha[2].at(i + 1))))
			{
				senhaFinal += senha[0].at(i);
				senhaFinal += " ";
			}

			else if (((senha[0].at(i + 1) == senha[1].at(i)) && (senha[0].at(i + 1) == senha[2].at(i)) && (senha[1].at(i) == senha[2].at(i))) ||
				((senha[0].at(i + 1) == senha[1].at(i + 1)) && (senha[0].at(i + 1) == senha[2].at(i)) && (senha[1].at(i + 1) == senha[2].at(i))) ||
				((senha[0].at(i + 1) == senha[1].at(i)) && (senha[0].at(i + 1) == senha[2].at(i + 1)) && (senha[1].at(i) == senha[2].at(i + 1))) ||
				((senha[0].at(i + 1) == senha[1].at(i + 1)) && (senha[0].at(i + 1) == senha[2].at(i + 1)) && (senha[1].at(i + 1) == senha[2].at(i + 1))))
			{
				senhaFinal += senha[0].at(i + 1);
				senhaFinal += " ";
			}
		}
	}
	return senhaFinal;
}