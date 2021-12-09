#include <iostream>
#include<string>
#include<math.h>
#include <vector>

using namespace std;
using std::string;

class Funcionario
{
	private:
		string nome;
		int cod;
		
	protected:
		float salario;
		
	public:
		Funcionario(string nome, int cod, float salario): nome(nome), cod(cod), salario(salario){};
		
		string getNome(){ return nome; }
		int getCod(){ return cod; }
		float getSalario(){ return salario; }
		
		void setNome(){ this->nome = nome; }
		void setCod(){ this->cod = cod; }
		void setSalario(){ this->salario = salario; }
		
		virtual float calSalario(){ return salario; }
		
		virtual void mostraDados()
		{
			cout << "Nome: " << this->nome << endl;
			cout << "Código Funcional: " << this->cod << endl;
			cout << "Salário: " << this->salario << endl;
		}
};


class EnBasic : public Funcionario
{
	protected:
		string escola;
	
	public:
		EnBasic(string nome, int cod, float salario, string escola): Funcionario(nome, cod, salario), escola(escola){}
		
		string getEscola(){ return escola; }
		
		void setEscola(){ this->escola = escola; }
		
		float calSalario() override { return salario + (salario * 0.1); } 
		
		void mostraDados() override
		{
			cout << "Nome: " << getNome() << endl;
			cout << "Código Funcional: " << getCod() << endl;
			cout << "Salário: " << calSalario() << endl;
			cout << "Escola onde estudou : " << this->escola << endl;
		}
};

class EnMed : public EnBasic
{
	protected:
		string colegio;
	
	public:
		EnMed(string nome, int cod, float salario, string escola, string colegio) : EnBasic(nome, cod, salario, escola), 				colegio(colegio){}
		
		string getColegio(){ return colegio; }
		
		void setColegio(){ this->colegio = colegio; }
		
		float calSalario() override { return salario + (salario * 0.5); } 
		
		void mostraDados() override
		{
			cout << "Nome: " << getNome() << endl;
			cout << "Código Funcional: " << getCod() << endl;
			cout << "Salário: " << calSalario() << endl;
			cout << "Escola onde estudou : " << getEscola() << endl;
			cout << "Colegio onde estudou : " << this->colegio << endl;
		}
};

class EnSup : public EnMed
{
	protected:
		string universidade;
		
	public:
		EnSup(string nome, int cod, float salario, string escola, string colegio, string universidade) :
			EnMed(nome, cod, salario, 	escola, colegio), universidade(universidade){}
		
		string getUniversidade() { return universidade; }
		
		void setUniversidade() { this->universidade = universidade; }
		
		float calSalario() override { return salario + (salario * 1.0); } 
		
		void mostraDados() override
		{
			cout << "Nome: " << getNome() << endl;
			cout << "Código Funcional: " << getCod() << endl;
			cout << "Salário: " << calSalario() << endl;
			cout << "Escola onde estudou : " << getEscola() << endl;
			cout << "Colegio onde estudou : " << getColegio() << endl;
			cout << "Universidade onde estudou : " << this->universidade << endl;
		}
};
		
int main()
{
	EnBasic b1("Joaquim", 123, 1000.00, "aaaaa");
	EnBasic b2("Joana", 456, 1000.00, "bbbb");
	EnBasic b3("Joao", 789, 1000.00, "ccccc");
	EnBasic b4("Jorge", 321, 1000.00, "ddddd");
	
	EnMed m1("Alfredo", 147, 1000.00, "ddddd", "eeee");
	EnMed m2("Asdrubo", 258, 1000.00, "jjjjj", "ffff");
	EnMed m3("Adaleia", 369, 1000.00, "vvvv", "kkkk");
	EnMed m4("Adalto", 741, 1000.00, "zzzz", "qqqqq");
	
	EnSup s1("Maria", 852, 1000.00, "zzzz", "wwwww", "uuuu");
	EnSup s2("Mario", 963, 1000.00, "hhhh", "oooo", "iiiii");
	
	vector <Funcionario*> f;
	float total;
	
	f.push_back(&b1);
	f.push_back(&b2);
	f.push_back(&b3);
	f.push_back(&b4);
	f.push_back(&m1);
	f.push_back(&m2);
	f.push_back(&m3);
	f.push_back(&m4);
	f.push_back(&s1);
	f.push_back(&s2);
	
	for(auto fun : f)
	{
		total = total + fun->calSalario();
		fun->mostraDados();
	}
	
	cout << "Custo total: " << total << endl;
	cout << "Nivel Básico: " << b1.calSalario() + b2.calSalario() + b3.calSalario() + b4.calSalario() << endl;
	cout << "Nivel Médio: " << m1.calSalario() + m2.calSalario() + m3.calSalario() + m4.calSalario() << endl;
	cout << "Nivel Superior: " << s1.calSalario() + s2.calSalario() << endl;
	
}
	
		
