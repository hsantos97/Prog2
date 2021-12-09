/* 2. Reproduza o exemplo trabalhado durante a aula da classe Lampada exatamente como foi feito,
adicionando a ela o metodo ehEconomica(). Este metodo retornar verdadeiro se a potoencia da
lˆampada for menor que 40 e falso, caso contr´ario. Instancie um objeto e teste todos os m´etodos
implementados. */

#include <iostream>
#include<string>

using namespace std;

class lampada
{
	public:
	bool ligada;
	string tipo;
	int voltagem;
	int potencia;
	
	void ligar() { ligada = true; }
	
	void desligar() { ligada = false; }
	
	void status()
	{
		if(ligada)
			cout << "lampada " << tipo << " está ligada" << endl;
		else
			cout << "lampada " << tipo << " está desligada" << endl;
	}
		 
	bool ehEconomica()
	{
		if(potencia < 40 )
			return true;
		else
			return false;
	}
};

int main()
{
	lampada lamp1, lamp2;
	
	lamp1.tipo = "incandescente";
	lamp1.potencia = 60;
	lamp1.voltagem = 220;
	
	lamp1.ligar();
	lamp1.status();
	lamp1.desligar();
	lamp1.status();
	cout << "economia lampada " << lamp1.tipo << ": " << lamp1.ehEconomica() << endl;
	
	lamp2.tipo = "led";
	lamp2.potencia = 30;
	lamp2.voltagem = 110;
	
	lamp2.ligar();
	lamp2.status();
	cout << "economia lampada " << lamp2.tipo << ": " << lamp2.ehEconomica() << endl;
}
