/* 1. Crie a classe Triangulo, tendo como atributos sua base e altura. Por enquanto, mantenha todo o
conte´udo da classe como public e crie um metodo calculaArea() que, quando invocado, imprima
na tela a ´area do triˆangulo que o invocou. No programa principal, instancie e inicialize com valores
digitados do teclado dois objetos desta classe e invoque o m´etodo para ambos. */

#include <iostream>

using namespace std;

class triangulo
{
	public:
	
	int base;
	int altura;
	
	void calculaArea()
	{
		cout << "Área do triangulo: " << (base * altura)/2 << endl;
	}
};

int main()
{
	triangulo t1;
	
	cout << "informe o valor da base: " << endl;
	cin >> t1.base;
	
	cout << "informe o valor da altura: " << endl;
	cin >> t1.altura;
	
	t1.calculaArea();

}
