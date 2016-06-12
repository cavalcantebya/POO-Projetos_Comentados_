// Meu primeiro código em C++
#include <iostream>
//Foi aberta essa biblioteca pq eu qro q o usuário dê nome a minha variável
#include <string>
using namespace std;

//Função Principal
int main(int argc, char* args[])
{

	char inicial;
	//foi usado string pq eu qro q o usuário dê nome a minha variável
 	string nome;
	string classe;
	
	//imprimindo na tela o pedido dos nomes dos personagens e suas classes e salvando os nomes fornecidos pelo o usuário
	cout << "Digite o nome do personagem:" << endl;
	getline(cin, nome); 
	inicial = nome[0];
	cout << "Digite a classe do personagem:" << endl;
	getline(cin, classe);
	cout << "Personagem " << inicial << " . " << nome << endl;
	cout << "Classe: " << classe << endl;
	
	//determinando a quantidade de ataque e defesa q o personagem terá
	int ataque = 10;
	int defesa = 8, magia = 2, def_magica = 4;
	//Determinando a quantidade de vida que o personagem terá
	int vida = 88, vida_maxima = 110;

	double porc_vida = (vida * 100) / vida_maxima;
	printf("Vida : %.2f %%\n", porc_vida);
	
//Imprimindo na tela o seu status atual
	cout << "Status " << endl;
	//Imprimindo na tela o ataque e a defesa
	cout << "Ataque : " << ataque << " Defesa : " << defesa << endl;
	//Imprimindo na tela a mágica e asua defesa mágica
	cout << "Magica : " << ataque << " Def. Magica : " << def_magica << endl;
//Imptimindo na tela a vida máxima
	cout << "Vida : " << vida << " / " << vida_maxima << endl;
	//fim da função main
	return 0;


}
