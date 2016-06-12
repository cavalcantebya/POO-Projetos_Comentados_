#include <iostream>
// íncluindo uma biblioteca para o uso da variável string
#include <string>
// íncluindo uma biblioteca  da hora para o uso da semente do gerador 
#include <ctime>

using namespace std;

// função principal
int main(int argc, char* args[])
{
	// declarando as variáveis 
	// Foi colocado o bool pois eu qro valores falsos/e ou nulo e verdadeiros
	bool sair = false;
	//Foi utilazado string pois, eu qro que o usuário de um nome a variável
	string jog1, jog2;
	//Int, pois eu quero valores inteiros
	int vida1 = 20, vida2 = 20;
	int A = 4, D = 2;

// Imprime na tela o nome do jogador e salva o nome que o usuário colocou
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;
	//Laço while (laço de condição que faz oq foi pedido repetir)
	while (sair == false) {

// Imprimi pela primeira vez os personagens e os seus status
		cout << " o                       o" << endl;
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		cout << "A:" << A << "           " << "A:" << A << endl;
		cout << "D:" << D << "           " << "D:" << D << endl;

//Vai fazer com que a janela não seja fechada e o resultado seja mostrado
		system("pause");
		
//Declarado a variável 6 do dado
		int dado6;

		//Adiciona uma "semente" ao gerador de numeros
		srand((int)time(0));
		
//Valor aleatório até 6 e não pode ser 0 por isso somamos com 1
		dado6 = rand() % 6 + 1;
		
//Dando a condição para emitir os danos e/ou acertos para o jogador 1
			//dizendo que é preciso que a variavel dado 6 (o numero aleatorio) seja maior que 4
		if (dado6 > 4)
		{
			//Subtraindo o número de vida de acordo com o numero aleatório que sair no dado
			vida1 = vida1 - dado6;
			//mostrando o dano no jogador 1 e dizendo que o jogador 2 acertou o ataque e passando p/ a próxima rodada
			cout << jog1 << "Dano:" << -dado6 << endl;
			cout << jog2 << "Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
		}
			//diz que caso o número aleatório for menor ou igual a 4 vai dizer que o jogador 2 errou e pede o comando pra proxima rodada

		else if (dado6 <= 4)
		{

			cout << jog2 << "Errou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();

		}

//Valor aleatório até 6 e não pode ser 0 por isso somamos com 1
		dado6 = rand() % 6 + 1;
	
		//Dada a condição p/ emitir os danos e/ou acertos para o jogador 2
			//dizendo que é preciso que a variável dado 6 (o numero aleatório) seja maior que 4
		if (dado6 > 4)
		{
	//Subtraindo o número de vida de acordo com o dano do dado
			vida2 = vida2 - dado6;
			cout << jog2 << "Dano:" << -dado6 << endl;
			cout << jog1 << "Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
		}
		//caso a condicao de cima seja falsa vai para o outro jogador e se o dado for menor que 4 irá dizer que o jogador da vez errou e não irá aparecer dano pq não teve.

		else if (dado6 <= 4) {

			cout << jog1 << "Errou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();

		}

		//cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		//apagando o que foi colocado à cima para iniciar uma nova rodada com tudo limpo e não ficar um tumulto de informações!

		system("cls");

		//comando de condição, quando a vida1 for menor ou igual a o OU a vida2 for menos ou igual a 0 sair será verdadeiro e o programa vai sair do ciclo, caso isso não seja verdade a tela será limpa e o jogo continuará.

		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;
		}
			//limpando a tela

		else system("cls");
	}
		// quando um dos números de vida for igual ou inferior a zero, qro que imprima na tela que o jogo chegou ao fim


	cout << "Fim de jogo!" << endl;
	//dando as condicoes para imprimir na tela quem venceu e quem perdeu ou se os dois perderam	

	if (vida1 > 0) cout << jog1 << "Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << "Venceu!" << endl;
	else cout << "Ambos perderam!" << endl;
	//Fim da função main
	return 0;


}
