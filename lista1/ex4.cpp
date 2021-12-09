/* 4. Crie a classe Partida, tendo como atributos o nome do time mandante, n´umero de gols do time
mandante, pontua¸c˜ao do time mandante, nome do time visitante, n´umero de gols do time visitante e
pontua¸c˜ao do time visitante. Crie um m´etodo resultado(string home, int goalHome, string
visitor, int goalVisitor) que permita definir nome e n´umero de gols dos times; crie um m´etodo
calculaPontos() que define os pontos conquistados pelos times depois do resultado consumado.
Crie tamb´em um m´etodo mostraResultado() que imprima na tela o resultado final como no
formato Visitante 4 x 2 Mandante. Instancie dois objetos desta classe e teste seus m´etodos no
programa principal. */

#include <iostream>
#include<string>

using namespace std;

class partida
{
	public:
	string nomeMan, nomeVis;
	int golMan, pontMan;
	int golVis, pontVis;
	
	void resultado(string nomeMan, int golMan, string nomeVis, int golVis)
	{
		cout << "nome do time mandante:" << endl;
		cin >> nomeMan;
		this->nomeMan = nomeMan;
		
		cout << "nome do time visitante:" << endl;
		cin >> nomeVis;
		this->nomeVis = nomeVis;
		
		cout << "numero de gols do time mandante:" << endl;
		cin >> golMan;
		this->golMan = golMan;
		
		cout << "numero de gols do time visitante:" << endl;
		cin >> golVis;
		this->golVis = golVis;
	}
	
	void calculaPontos()
	{
		pontMan = 0;
		pontVis = 0;
		
		if(this->golMan > this->golVis)
			pontMan += 3;
		else
			pontVis += 3;
		
		if(this->golMan == this->golVis)
		{
			pontMan += 1;
			pontVis += 1;
		}
		
		cout << "numeros de pontos do Mandante: " << this->pontMan << endl;
		cout << "numeros de pontos do Visitante: " << this->pontVis << endl;
	}
	
	void mostraResultado()
	{
		cout << this->nomeMan << " " << this->golMan << " x " << this->golVis << " " << this->nomeVis << endl;
	}
};
		
int main()
{
	partida p1;
	string time1, time2;
	int gol1, gol2;
	
	p1.resultado(time1, gol1, time2, gol2);
	p1.calculaPontos();
	p1.mostraResultado();
}
