/* Crie uma classe abstrata FormaGeometrica que contenha um método puramente virtual chamado
calculaArea. Crie uma classe Retangulo derivada da classe acima que contenha os atributos para
os dois lados do retângulo.
a) O que acontece se a classe Retangulo não realizar a sobrescrita do método calculaArea? Por
que?
b) O que acontece se a classe Retangulo realizar a sobrescrita do método calculaArea sem
utilizar a palavra-chave override? Por que?
c) O que acontece se a classe Retangulo realizar a sobrescrita do método calculaArea, mas
dizendo que tal método é const? Por que?
Crie um método oi() na classe base, cuja implementação é:
cout << "oi, sou uma forma geometrica()<<endl;.
Crie também o mesmo método na classe derivada, desta vez escrevendo: cout <<"oi, sou um retangulo<<endl; 
Assumindo que nenhum dos dois métodos são virtuais, o que acontece se eu invocar o método 
oi() de um objeto Retangulo a partir de um ponteiro de um objeto FormaGeometrica?
Por que?
Permita que o método oi() possa ser invocado corretamente para um objeto Retangulo, mesmo a
partir de um ponteiro de FormaGeometrica */

#include <iostream>
#include<string>
#include <vector>

using namespace std;

class FormaGeometrica
{
    public:
        virtual double calculaArea() = 0;

        virtual void oi(){ cout << "oi, sou uma forma geometrica" << endl; }

};

class Retangulo : public FormaGeometrica
{
    private:
        double b, h;
    
    public:
        Retangulo(double b, double h): b(b), h(h) {}
        double calculaArea() override { return b *h; }

        void oi() override { cout << "oi, sou um retangulo" << endl; }
};

int main()
{
    Retangulo r1(3.0, 5.0);
    cout << "Área: " << r1.calculaArea() << endl;

    FormaGeometrica *f1;
    f1 = &r1;
    
    f1->oi();

   // vector <FormaGeometrica*> ponteiro;
   // ponteiro.push_back(&r1);

    //ponteiro[0]->oi();

}


/*a) Ocorre um erro, A classe Retangulo está herdando o método puramente virtual da classe pai FormaGeometrica, 
logo Retangulo herda o método puramente virtual */

//b) Se não utilizar a palavra chave override, não será uma sobrescrita. Pois ela sera um método da classe filha.

//c) Ocorre um erro, pois ocorre um conflito no tipo de retorno.

/*d) Quando não utilizamos o override o método oi() da classe filho imprime(Retangulo) o método oi() da classe 
pai (FormaGeometrica), para a impressão correta tive que usar virtual no método da classe pai e override no método da 
classe filho */