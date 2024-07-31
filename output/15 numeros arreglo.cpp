#include <iostream>
#include <stdio.h>
#include <conio.h> 
#include <cstring>
#include <math.h>
using namespace std;
	int numerosentero[15],i;
	int b[15],c[15],d[15];
	float f,e[15],a[15],ai;
void sas(){
		for(int i=0;i<15;i++){
		cout<<"introduzca un numero:";
		cin>>numerosentero[i];
		}
}
int sus(){
		for(int i=0;i<15;i++){
a[i]=pow(numerosentero[i],2);
b[i]=numerosentero[i]*2;
c[i]=pow(numerosentero[i],3);
d[i]=numerosentero[i]*3;
e[i]=sqrt(numerosentero[i]);
ai+=a[i];
	}
	return f=ai/15;
}
void sis(){
		for(int i=0;i<15;i++){
		cout<<"========================================="<<endl;
		cout<<"el cuadrado del numero "<<i+1<<" es => "<<a[i]<<endl;
		cout<<"el doble del numero "<<i+1<<" es => "<<b[i]<<endl;
		cout<<"el cubo del numero "<<i+1<<" es => "<<c[i]<<endl;
		cout<<"el triple del numero "<<i+1<<" es => "<<d[i]<<endl;
		cout<<"la raiz cuadrada del numero "<<i+1<<" es => "<<e[i]<<endl;
		cout<<"========================================="<<endl;
		system("pause");
	}
}
int main(int argc, char *argv[]){

	sas();
	sus();
	sis();
	cout<<"el promedio del cuadrado de los numeros es => "<<f<<endl;
<<a[i]<<
	cout<<"=================================================="<<endl;
}