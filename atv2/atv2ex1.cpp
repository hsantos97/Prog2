#include <iostream>
#include<string>

using namespace std;
using std::string;

class VeiculoAVenda
{
	private:
		
		string marca;
		string modelo;
		int ano;
		float precoDeVenda;	
			
	public:
		VeiculoAVenda(string marca, string modelo, int ano, float precoDeVenda): 
			marca(marca), modelo(modelo), ano(ano), precoDeVenda(precoDeVenda){};
		
		string getModelo(){ return modelo; }
		string getMarca(){ return marca; }
		int getAno(){ return ano; }
		float getPrecoDeVenda(){ return precoDeVenda; }
		
		void setMarca(string marca) { this->marca = marca; }
		void setModelo(string modelo) { this->modelo = modelo; }
		void setAno(int ano) { this->ano = ano; }
		void setPrecoDeVenda(float precoDeVenda) { this->precoDeVenda = precoDeVenda; }
		
		virtual void mostraDados()
		{
			cout << "Marca: " << this->marca << endl;
			cout << "Modelo: " << this->modelo << endl;
			cout << "Ano: " << this->ano << endl;
			cout << "Preco de Venda: " << this->precoDeVenda << endl;
		}
			
		
};

class AutomovelAVenda : public VeiculoAVenda
{
	private:
		float motor;
		bool tpCambio;
		int nPortas;
		
	public:
		AutomovelAVenda(string marca, string modelo, int ano, float precoDeVenda, float motor, bool tpCambio, int nPortas): VeiculoAVenda(marca, modelo, ano, precoDeVenda),
			motor(motor), tpCambio(tpCambio), nPortas(nPortas){}
		
		float getMotor(){ return motor; }
		bool getTpCambio() 
		{	 
			if(tpCambio == 1)
				return true;
			else
				return false;
		}
		int getNPortas() { return nPortas; }
		
		void setMotor(float motor){ this->motor = motor; }
		void setTpCambio(bool tpCambio){ this->tpCambio = tpCambio; }
		void setNPortas(float nPortas){ this->nPortas = nPortas; }
		
		void mostraDados() override
		{
			cout << "Marca: " << this->getMarca() << endl;
			cout << "Modelo: " << this->getModelo() << endl;
			cout << "Ano: " << this->getAno() << endl;
			cout << "Preco de Venda: " << this->getPrecoDeVenda() << endl;
			cout << "Motor: " << this->motor << endl;
			cout << "tpCambio: " << this->tpCambio << endl;
			cout << "Numero de portas: " << this->nPortas << endl;
		}
};
		
class MotocicletaAVenda : public VeiculoAVenda
{
	private:
		int cilindrada;
	public:
		MotocicletaAVenda(string marca, string modelo, int ano, float precoDeVenda,int cilindrada) :VeiculoAVenda(marca, modelo, ano, precoDeVenda), cilindrada(cilindrada){}
		
		int getCilindrada(){ return cilindrada; }
		
		void setCilindrada(){ this->cilindrada = cilindrada; }
		
		void mostraDados() override 
		{ 
			cout << "Marca: " << this->getMarca() << endl;
			cout << "Modelo: " << this->getModelo() << endl;
			cout << "Ano: " << this->getAno() << endl;
			cout << "Preco de Venda: " << this->getPrecoDeVenda() << endl;
			cout << "Cilindrada: " << this->cilindrada << endl;
		}
};

int main()
{
		
	AutomovelAVenda a1("volks", "gol", 2010, 12.700, 1.0, 0, 2);
	AutomovelAVenda a2("ford", "ka", 2019, 53.700, 1.8, 1, 4);
	
	a1.mostraDados();
	a2.mostraDados();
	
	MotocicletaAVenda m1("honda", "cg", 2015, 8.900, 150);
	MotocicletaAVenda m2("suzuke", "kawasak", 2010, 13.700, 300);
	
	m1.mostraDados();
	m2.mostraDados();
	
	float total = a1.getPrecoDeVenda() + a2.getPrecoDeVenda() + m1.getPrecoDeVenda() + m2.getPrecoDeVenda();
	
	cout << "Somatorio do preco de venda: " << total << endl;	
	
}		
