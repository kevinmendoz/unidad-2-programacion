#include "iostream"
using namespace std;

int main()
{
	//Problema 1.3 Escrbir un programa que te de el nombre del dinosario y con peso y longitud en libras y pies, que te lo de en kilos y metros
	
	//Declaracion de variables
	string NOMBRE;
	float PESOENLIBRAS, LONGITUDENPIES;
	float PESOENKILOS, LONGITUDENMETROS;
	
	cout<<"Escribe el nombre del dinosaurio: " << "\n";
	cin >> NOMBRE;

	cout<<" Escribe el peso del dinosaurio en libras: " << "\n";
	cin>>PESOENLIBRAS;
	
	cout<<" Escribe la longitud del dinosaurio en pies: " << "\n";
	cin>>LONGITUDENPIES;
	
	//Calculo
	PESOENKILOS=PESOENLIBRAS*1000;
	LONGITUDENMETROS=LONGITUDENPIES*0.3047
	
	//Se imprime el resultado
	;cout<<" El peso en kilos del dinosaurio "<<NOMBRE<< "es  "<<PESOENKILOS<<" Y la longitud en metros es "<<LONGITUDENMETROS<<"\n";
	return 0;
	
}

