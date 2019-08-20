#include <iostream>
using namespace std;


int main(){
	//delcalracion de variables a usar
	int i, numero;
	//se ingresa el numero en el que se desee que se termine de contar
	cout<<"ingrese el numero de fin: ";
	cin>>numero;
	//se inicailiza el numero de la iteracion
	i=0;
	//se hace un bucle desde el inicio , hasta el nuemro que se ingrese
	while(i<=numero){
		cout<<i<<" ";
		i++;
	}
	return 0;
}
