// Meu primeiro c�digo em C++
#include <iostream>
//Foi aberta essa biblioteca pq eu qro q o usu�rio d� nome a minha vari�vel
#include <string>
using namespace std;

//Fun��o Principal
int main(int argc, char* args[])
{

	char inicial;
	//foi usado string pq eu qro q o usu�rio d� nome a minha vari�vel
 	string nome;
	string classe;
	
	//imprimindo na tela o pedido dos nomes dos personagens e suas classes e salvando os nomes fornecidos pelo o usu�rio
	cout << "Digite o nome do personagem:" << endl;
	getline(cin, nome); 
	inicial = nome[0];
	cout << "Digite a classe do personagem:" << endl;
	getline(cin, classe);
	cout << "Personagem " << inicial << " . " << nome << endl;
	cout << "Classe: " << classe << endl;
	
	//determinando a quantidade de ataque e defesa q o personagem ter�
	int ataque = 10;
	int defesa = 8, magia = 2, def_magica = 4;
	//Determinando a quantidade de vida que o personagem ter�
	int vida = 88, vida_maxima = 110;

	double porc_vida = (vida * 100) / vida_maxima;
	printf("Vida : %.2f %%\n", porc_vida);
	
//Imprimindo na tela o seu status atual
	cout << "Status " << endl;
	//Imprimindo na tela o ataque e a defesa
	cout << "Ataque : " << ataque << " Defesa : " << defesa << endl;
	//Imprimindo na tela a m�gica e asua defesa m�gica
	cout << "Magica : " << ataque << " Def. Magica : " << def_magica << endl;
//Imptimindo na tela a vida m�xima
	cout << "Vida : " << vida << " / " << vida_maxima << endl;
	//fim da fun��o main
	return 0;


}
