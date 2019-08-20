/*programa que calcule la sucesión de Fibonacci, de forma iterativa y recursiva.*/
#include <iostream>
#include <conio.h>
#include <math.h>
 
int fibonR(int x); 
int fibonI(int x);

using namespace std;

int main()
{
	int num,op;
    do
    {
      	cout<<"Seleccione una opcion\n1.Recursiva\n2.Interativa\n3.Salir\n";
	    cin>>op;
	    if(op==1)
		{
			cout<<"Digite el elemento de la serie fibonacci que deseas generar: \n";
      		cin>>num;              
      		cout<<"Valor: "<<fibonR(num)<<endl;
      		getch();
	    }
		else if (op==2)
		{
			cout<<"Digite el elemento de la serie fibonacci que deseas generar: \n";
      		cin>>num;              
      		cout<<"Valor: "<<fibonI(num)<<endl;
			getch();
		}      	
		else if (op==3 || op!=2 || op!=1)
		{
			getch();
			return 0;
		}
      	system("cls");
    }
	while(op==1||op==2||op==3);
	return 0;
}
int fibonR(int a)
{
    if(a<=1)
    {
		return (a);
    }
    else
    {
    	return(fibonR(a-1)+fibonR(a-2));	
	}
}
int fibonI(int a)
{
	int d=0,b=1,c,i;
	for(i=0;i<a-1;i++)
    {
        c=d+b;
        d=b;
        b=c;
    }
    return c;
}
