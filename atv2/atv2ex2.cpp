#include <iostream>
#include<string>
#include<math.h>
#include <vector>

using namespace std;
using std::string;

class ObjetoGeometrico
{
	private:
		float x;
		float y;
	
	public:
		
		ObjetoGeometrico(float x, float y): x(x), y(y) {};
		
		float getX(){ return x; }
		float getY(){ return y; }
		
		void setX(){ this->x = x; }
		void setY(){ this->y = y; }
		
		virtual void mostraDados()
		{
			cout << "x: " << this->x << endl;
			cout << "y: " << this->y << endl;
		}
		
		virtual float area(){ return 1.0; };
		
		virtual float perimetro(){ return 1.0; };
};

class Circulo : public ObjetoGeometrico
{
	private:
		float cX;
		float cY;
		
	public:
		
		Circulo(float x, float y, float cX, float cY) : ObjetoGeometrico(x, y), cX(cX), cY(cY) {}
		
		float getCX(){ return cX; }
		float getCY(){ return cY; }
		
		void setCX(){ this->cX = cX; }
		void setCY(){ this->cX = cY; }
		
		void mostraDados() override
		{
			cout << "x: " << this->getX() << endl;
			cout << "y: " << this->getY() << endl;
			cout << "centro x: " << this->cX << endl;
			cout << "centro y: " << this->cY << endl;
		}
		
		float area() override
		{
			float r = getX() - this->cX;
			float pi = 3.14;
			
			cout << "circulo" << endl;
			
			return pi * (pow( r, 2));
		}
		
		float perimetro() override
		{
			float r = getX() - this->cX;
			float pi =3.14;
			
			return 2*pi*r;
		}
};

class Retangulo : public ObjetoGeometrico
{
	private:
		float b;
		float h;
		
	public:
		Retangulo(float x, float y, float b, float h) : ObjetoGeometrico(x, y), b(b), h(h) {}
		
		float getB(){ return b; }
		float getH(){ return h; }
		
		void setB(){ this->b = b; }
		void setH(){ this->h = h; }
		
		void mostraDados() override
		{
			cout << "x: " << this->getX() << endl;
			cout << "y: " << this->getY() << endl;
			cout << "Base: " << this->b << endl;
			cout << "altura: " << this->h << endl;
		}
		
		float area() override 
		{ 
			cout << "retangulo" << endl;
			return this->b * this->h; 
		}
		
		float perimetro() override { return 2 * this->b + 2 * this->h; }
		
};

class Triangulo : public ObjetoGeometrico
{
	private:
		float l1;
		float l2;
		float l3;
	
	public:
		Triangulo(float x, float y, float l1, float l2, float l3): ObjetoGeometrico(x, y), l1(l1), l2(l2), l3(l3) {}
		
		float getL1(){ return l1; }
		float getL2(){ return l2; }
		float getL3(){ return l3; }	
		 
		void setL1(){ this->l1 = l1; }
		void setL2(){ this->l2 = l2; }
		void setL3(){ this->l3 = l3; }
		 
		void mostraDados() override
		{
			cout << "x: " << this->getX() << endl;
			cout << "y: " << this->getY() << endl;
			cout << "Lado 1: " << this->l1 << endl;
			cout << "Lado 2: " << this->l2 << endl;
			cout << "Lado 3: " << this->l3 << endl;
		}	
		
		float area() override 
		{
			float s = this->l1 + this->l2 + this->l3;
			
			cout << "triangulo" << endl;
			
			return sqrt(s*((s-l1)*(s-l2)*(s-l3)));
		}
		
		float perimetro() override { return l1+l2+l3; }
		
}; 

int main()
{
	Circulo c1(10.0, 10.0, 5.0, 5.0);
	
	Retangulo r1(10.0, 10.0, 5.0, 2.0);
	
	Triangulo t1(5.0, 5.0, 3.0, 4.0, 5.0);
	
	vector<ObjetoGeometrico*> objeto;
	
	objeto.push_back(&c1);
	objeto.push_back(&r1);
	objeto.push_back(&t1);
	
	for(auto o : objeto)
	{
		cout << "area: " << o->area() << endl;
		cout << "perimetro: " << o->perimetro() << endl;
	}
}
	   
 
