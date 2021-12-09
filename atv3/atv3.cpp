/* 1. Considere a implementação de uma classe base chamada Produto, contendo apenas os atributos de
preço e nome do produto. Considere uma segunda classe chamada ComboProduto que contenha
os atributos totalValor e quantidadeItens. Crie uma função amiga chamada combinarProdutos
que, recebendo como parâmetro dois objetos da classe Produto, dê como retorno um objeto da
classe ComboProduto, cujo atributo totalValor contenha a soma dos valores dos dois produtos,
descontados 15% e atribua 2 a quantidadeItens.
No programa principal, realize os testes necessários para garantir que a função está operando
corretamente, garantindo que os valores sejam mostrados em tela. */

#include <iostream>
#include<string>

using namespace std;

class Produto
{
    private:
        double preco;
        string nome;
      //  friend ComboProduto combinarProdutos(Produto &a, Produto &b);

    public:
        Produto(double preco, string nome) : preco(preco), nome(nome) {};

        double getPreco() { return preco; }
        string getNome() {  return nome; }

        void setPreco() { this->preco = preco; }
        void setNome() { this->nome = nome; }


};

class ComboProduto : private Produto
{
    private:
        double totalValor;
        int quantidadedeItens;
        friend ComboProduto combinarProdutos(Produto &a, Produto &b);
    
    public:
        ComboProduto(double preco, string nome, double totalValor, int quantidadedeItens) : Produto(preco, nome), 
            totalValor(totalValor), quantidadedeItens(quantidadedeItens) {}

        double getTotalValor() { return totalValor;}
        int getQuantidadedeItens() { return quantidadedeItens; }

        void setTotalValor() { this->totalValor = totalValor; }
        void setQuantidadedeItens() { this->quantidadedeItens = quantidadedeItens; }

        void mostraDados()
        {
            cout << "Nome dos itens: " << this->getNome() << endl;
            cout << "Preço total com Desconto: " << this->getPreco() << endl;
            cout << "Quantidade de itens: " << quantidadedeItens << endl;

        }
};

ComboProduto combinarProdutos(Produto &a, Produto &b)
{
    double totalValor = (a.getPreco() + b.getPreco()) - ((a.getPreco() + b.getPreco()) * 0.15 );
    string produtos = a.getNome() + b.getNome();
    ComboProduto combo(totalValor, produtos, totalValor, 2);
    return combo;
}

int main()
{
    Produto a(20.0, "produto 1");
    Produto b(10.0, "produto 2");

    ComboProduto combo = combinarProdutos(a, b);
    combo.mostraDados();

}