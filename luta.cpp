#include <iostream>
// �ncluindo uma biblioteca para o uso da vari�vel string
#include <string>
// �ncluindo uma biblioteca  da hora para o uso da semente do gerador 
#include <ctime>

using namespace std;

// fun��o principal
int main(int argc, char* args[])
{
	// declarando as vari�veis 
	// Foi colocado o bool pois eu qro valores falsos/e ou nulo e verdadeiros
	bool sair = false;
	//Foi utilazado string pois, eu qro que o usu�rio de um nome a vari�vel
	string jog1, jog2;
	//Int, pois eu quero valores inteiros
	int vida1 = 20, vida2 = 20;
	int A = 4, D = 2;

// Imprime na tela o nome do jogador e salva o nome que o usu�rio colocou
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;
	//La�o while (la�o de condi��o que faz oq foi pedido repetir)
	while (sair == false) {

// Imprimi pela primeira vez os personagens e os seus status
		cout << " o                       o" << endl;
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		cout << "A:" << A << "           " << "A:" << A << endl;
		cout << "D:" << D << "           " << "D:" << D << endl;

//Vai fazer com que a janela n�o seja fechada e o resultado seja mostrado
		system("pause");
		
//Declarado a vari�vel 6 do dado
		int dado6;

		//Adiciona uma "semente" ao gerador de numeros
		srand((int)time(0));
		
//Valor aleat�rio at� 6 e n�o pode ser 0 por isso somamos com 1
		dado6 = rand() % 6 + 1;
		
//Dando a condi��o para emitir os danos e/ou acertos para o jogador 1
			//dizendo que � preciso que a variavel dado 6 (o numero aleatorio) seja maior que 4
		if (dado6 > 4)
		{
			//Subtraindo o n�mero de vida de acordo com o numero aleat�rio que sair no dado
			vida1 = vida1 - dado6;
			//mostrando o dano no jogador 1 e dizendo que o jogador 2 acertou o ataque e passando p/ a pr�xima rodada
			cout << jog1 << "Dano:" << -dado6 << endl;
			cout << jog2 << "Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
		}
			//diz que caso o n�mero aleat�rio for menor ou igual a 4 vai dizer que o jogador 2 errou e pede o comando pra proxima rodada

		else if (dado6 <= 4)
		{

			cout << jog2 << "Errou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();

		}

//Valor aleat�rio at� 6 e n�o pode ser 0 por isso somamos com 1
		dado6 = rand() % 6 + 1;
	
		//Dada a condi��o p/ emitir os danos e/ou acertos para o jogador 2
			//dizendo que � preciso que a vari�vel dado 6 (o numero aleat�rio) seja maior que 4
		if (dado6 > 4)
		{
	//Subtraindo o n�mero de vida de acordo com o dano do dado
			vida2 = vida2 - dado6;
			cout << jog2 << "Dano:" << -dado6 << endl;
			cout << jog1 << "Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
		}
		//caso a condicao de cima seja falsa vai para o outro jogador e se o dado for menor que 4 ir� dizer que o jogador da vez errou e n�o ir� aparecer dano pq n�o teve.

		else if (dado6 <= 4) {

			cout << jog1 << "Errou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();

		}

		//cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		//apagando o que foi colocado � cima para iniciar uma nova rodada com tudo limpo e n�o ficar um tumulto de informa��es!

		system("cls");

		//comando de condi��o, quando a vida1 for menor ou igual a o OU a vida2 for menos ou igual a 0 sair ser� verdadeiro e o programa vai sair do ciclo, caso isso n�o seja verdade a tela ser� limpa e o jogo continuar�.

		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;
		}
			//limpando a tela

		else system("cls");
	}
		// quando um dos n�meros de vida for igual ou inferior a zero, qro que imprima na tela que o jogo chegou ao fim


	cout << "Fim de jogo!" << endl;
	//dando as condicoes para imprimir na tela quem venceu e quem perdeu ou se os dois perderam	

	if (vida1 > 0) cout << jog1 << "Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << "Venceu!" << endl;
	else cout << "Ambos perderam!" << endl;
	//Fim da fun��o main
	return 0;


}
