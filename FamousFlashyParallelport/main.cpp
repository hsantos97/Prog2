#include <iostream>
using namespace std;
/*int main() // exemplo 2
{
  int n, soma =0, i, par;

  cout << "informe a quantidade de pares\n";
  cin >> n;

  for(i = 0; i < n; i++)
  {
    par = par + 2;
    if(par % 2 == 0)
      soma = soma + par;
  }

  cout << "somatorio =" << soma;
} */

/*int main() // exemplo1
{
    int n, valor, soma = 0, i;
    double med;

    cout << "informe valor de n: \n";
    cin >> n;

    for(i=0; i < n; i++)
    {
        cout << "digite o numero \n";
        cin >> valor;
        soma = soma + valor;
    }

    med = (double)soma / n;

    cout << "média = " << med;
}*/

/*int main()//exemplo 3
{
  int n, quadrado, i, valor;

  cout << "informe o valor de n:\n";
  cin >> n;

  for(i =1; i <= n; i++)
      cout << i*i <<"\n";
}*/

int main() //exemplo 4
{
    int i, fat = 1, n;

    cout << "informe o n:";
    cin >> n;

    if(n == 0)
    {
      cout << "não existe";
      return 0;
    }  
    else
    {
        for(i=n; i > 1; i--)
          fat = fat * i;
    }

    cout << "fatorial = " << fat;
}