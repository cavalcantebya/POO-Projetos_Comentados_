#include <iostream> 
#include <string> //Foi aberta essa biblioteca pq eu qro q o usuário dê nome a minha variável
#include <ctime> //Foi aberta essa biblioteca para podermos trabalhar com o tempo do relogio do computador
using namespace std;

//identificando a função criada
void imprimir_espacos(int total1);

//função principal
int main(int argc, char* args[])
{
	//declarando as variáveis
	//foi usado bool pq qro atribuir valores verdadeiros, falsos e\ou nulos
	bool sair = false;
	//foi usado string pq eu qro q o usuário dê nome a minha variável
	string piloto1, piloto2;
	//usamos int pq eu qro trabalhar com variaveis inteiras, numeros inteiros
	int total1 = 0, total2 = 0;

	//imprimindo na tela o pedido dos nomes dos pilotos e salvando os nomes fornecidos pelo o usuário
	cout << "Digite o nome do piloto1:" << endl;
	cin >> piloto1;

	cout << "Digite o nome do piloto2:" << endl;
	cin >> piloto2;

	//iniciando o laço while (laço de condicao (q vai fazer o jogo repetir até chegar ao fim)) 
	while (sair == false)
	{
		//determinando a quantidade de espaço q o carro pode correr
		int total_espacos = 60;

		//usando números aleatórios de acordo com o tempo do computador
		srand((int)time(0));

		//gerando número aleatório de 1-3 para o piloto1
		total_espacos = rand() % 3 + 1;

		total1 = total1 + total_espacos;

		//gerando número aleatório de 1-3 para o piloto2
		total_espacos = rand() % 3 + 1;

		total2 = total2 + total_espacos;


		//imprimindo na tela o nome do jogo, a largada e a chegada 
		cout << "corrida do amor:" << endl;

		cout << "LARGADA:                                                                    CHEGADA:" << endl;
		//colocando o nome do primeiro jogador no piloto
		cout << "Piloto 1:" << piloto1 << endl;
		//Usando o número aleatório Total1 para definir a quantidade de espaços que o carrinho vai andar
		imprimir_espacos(total1);
		//imprimindo o carrinho na tela
		cout << "-|o=o>" << endl;
		

		//imprimindo na tela o valor que o piloto 1 andou
		cout << "Valor que andou: " << total1 << endl;  //Total de espaços andando pelo carrinho 1

		//colocando o nome do segundo jogador no piloto
		cout << "Piloto 2:" << piloto2 << endl;
		//Usando o número aleatório Total1 para definir a quantidade de espaços que o carrinho vai andar
		imprimir_espacos(total2);
		//imprimindo o carrinho na tela
		cout << "-|o=o>" << endl;

		//imprimindo na tela o valor que o piloto 2 andou
		cout << "Valor que andou: " << total2 << endl;

		//limpando a tela
		system("cls");


		//mostrando a condiçãoo de quando o ciclo do jogo vai parar
		if (total1 >= 60 || total2 >= 60)
		{
			sair = true;

		}

		//caso contrario, limpa a tela para uma nova jogada
		else system("cls");


	}

	//indicando o término do jogo
	cout << "Fim da corrida!" << endl;

	//apresentando as condições para saber qual jogador ganhou. 
	//dizendo quem ganhou e quem perdeu ou se ouve empate
	if (total1 >= 60) cout << piloto1 << ", uhuuuuu, voce venceu a corrida! :)  " << piloto2 <<", lamento, voce perdeu a corrida :(" << endl;

	else if (total2 >= 60) cout << piloto2 << ", uhuuuuu, voce venceu a corrida! :)  " << piloto1 <<", lamento, voce perdeu a corrida :(" << endl;

	else cout << "os dois ganharam! :) :)" << endl;

	//finalizando a função main
	return 0;

}


//usando a função q irá fazer um "super poder" de imprimir os espacos
void imprimir_espacos(int total)
{
	//abrindo a função para imprimir o número de espaços que eu quero
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)
	{//imprimindo espaço que será repetido
		cout << " ";


	} //fechando laço que imprime o espaço
} //fechando a função do espaço
