/* 3. Crie a classe Empregado que contenha nome e sal´ario. Crie dois m´etodos para ela: aumento(float
porcentagem) que aumente seu sal´ario de acordo com a porcentagem passada no parˆametro e;
mostraDados() que imprime na tela o nome e o sal´ario do funcion´ario. Teste a classe no programa
principal, mostrando os dados do funcion´ario antes e depois de um aumento concedido. */

#include <iostream>
#include<string>

using namespace std;

class empregado
{
	public:
	string nome;
	float salario;
	
	void aumento(float porcentagem)
	{
		cout << "sálario com aumento de " << porcentagem << "%: " << salario + (salario * (porcentagem / 100)) << endl;
	}
	
	void mostraDados()
	{
		cout << "nome: " << nome << endl;
		cout << "salário: " << salario << endl;
	}
};

int main()
{
	empregado emp1, emp2;
	
	emp1.nome = "joão silva";
	emp1.salario = 1000.00;
	
	emp1.mostraDados();
	emp1.aumento(30.0);
	
	emp2.nome = "joaquim mineiro";
	emp2.salario = 2000.00;
	emp2.mostraDados();
	emp2.aumento(5.0);
}
	
	
