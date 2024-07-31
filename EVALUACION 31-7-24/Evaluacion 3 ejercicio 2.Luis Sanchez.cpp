//Luis Sanchez C.I:30.324.680
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stack>     //librerias 
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <queue>
using namespace std;
struct datos{
int galonaceite;
int galoncaucho;   //declaramos el struct
int galonsatinada;	
string nombre;
};
float aceite=6200,a,d,g;
float caucho=5400,b,e,h;
float satinada=10500,c,f,neto;  //declaramos variables 
queue<datos> Datos;
datos datosA;
int op,opc,descuento,i,o;
void menu (){ //inicio del void menu 
		do{//inicio del do
			system("cls");
	cout<<"=============*BIENVENIDO CLIENTE*============="<<endl;
	cout<<"======================*A*===================="<<endl;
	cout<<"=============*LA CASA DEL PINTOR*============="<<endl;
	cout<<""<<endl;
	cout<<"==============MENU PRINCIPAL=============="<<endl;
	cout<<"|1.COMPRAR                               |"<<endl;
	cout<<"|2.FACTURA                               |"<<endl;
	cout<<"|3.SALIR DEL PROGRAMA...                 |"<<endl;   //menu de respuestas 
	cout<<"=========================================="<<endl;
	cout<<"SELECCIONE UNA OPCION:";
	cin>>opc;
		 switch(opc){
		 	case 1:
		 		system("cls");
		 		cout<<"==============================="<<endl;
		 		cout<<"|HAZ ELEGIDO LA OPCION COMPRAR|"<<endl;
		 		cout<<"==============================="<<endl;
		 		system("pause");
		 		system("cls");
		 		cout<<"====================PRECIOS DE LOS PRODUCTOS==================="<<endl;
		 		cout<<"1.ACEITE => 6,200$ / 2.CAUCHO => 5,400$ / 3.SATINADA => 10,500$"<<endl;  //ingresaamos los datos pertinentes 
		 		cout<<"==============================================================="<<endl;
				cout<<"CUANTOS GALONES DE PINTURA DE ACEITE DESEA COMPRAR?:";
				cin>>datosA.galonaceite;
				cout<<"CUANTOS GALONES DE PINTURA DE CAUCHO DESEA COMPRAR?:";
				cin>>datosA.galoncaucho;
				cout<<"CUANTOS GALONES DE PINTURA SATINADA DESEA COMPRAR?:";
				cin>>datosA.galonsatinada;
				Datos.push({datosA.galonaceite,datosA.galoncaucho,datosA.galonsatinada});
				a=datosA.galonaceite*aceite;
				b=datosA.galoncaucho*caucho;
				c=datosA.galonsatinada*satinada;     //operaciones matematicas para obtener los resultados 
				d=(a+a)*0.20;
				//inicio de las validaciones 
				if(datosA.galoncaucho>=3&&datosA.galoncaucho<=5){
			    descuento=7;
				e=(b+b)*0.7;
				i++;
			}
				if(datosA.galoncaucho>=6&&datosA.galoncaucho<=10){
					descuento=10;
				e=(b+b)*0.10;
								i++;

			}
				if(datosA.galoncaucho>10){
					descuento=15;
				e=(b+b)*0.15;
								i++;

			}
			if(datosA.galonsatinada>5){
				f=(c+c)*0.12;
				o++;
			}
				g=a+b+c;
				h=d+e+f;
				if(i==0){
					neto=d+b+f;
				}
				if(o==0){
					neto=d+e+c;
				}
				if(i==0&&o<=0){
					neto=d+b+c;
				}
				if(i==1&&o==1){
					neto=d+e+f;
				}
				//fin de las validaciones 
		 	break;
		 	case 2:
		 		system("cls");
		 		cout<<"==============================="<<endl;
		 		cout<<"|HAZ ELEGIDO LA OPCION FACTURA|"<<endl;  //opcion factura 
		 		cout<<"==============================="<<endl;
		 		system("pause");
		 		system("cls");
		 		while(!Datos.empty()){
		 			datosA=Datos.front();
		 			cout<<"=============================INFORME=================================="<<endl;
		 			cout<<"|GALONES DE PINTURA DE ACEITE COMPRADOS =>"<<datosA.galonaceite<<" / PRECIO TOTAL =>"<<a<<"$ |"<<endl;
		 			cout<<"|GALONES DE PINTURA DE CAUCHO COMPRADOS =>"<<datosA.galoncaucho<<" / PRECIO TOTAL =>"<<b<<"$ |"<<endl;
		 			cout<<"|GALONES DE PINTURA SATINADA COMPRADOS =>"<<datosA.galonsatinada<<" / PRECIO TOTAL =>"<<c<<"$|"<<endl;
		 			cout<<"====================================================================="<<endl;
		 			system("pause");
		 			system("cls");
		 			cout<<"================DESCUENTOS==================="<<endl;
		 			cout<<"|DESCUENTO DEL 20% EN LA PINTURA DE ACEITE  |"<<endl;
		 			cout<<"|NUEVO TOTAL A PAGAR =>"<<d<<"$               |"<<endl;
		 			if(i>=1){
		 			cout<<"|DESCUENTO DEL "<<descuento<<"% EN LA PINTURA DE CAUCHO  |"<<endl;  //mostramos todos los resultados 
					cout<<"|NUEVO TOTAL A PAGAR =>"<<e<<"$               |"<<endl; 
					i--; 
				}
				if(o>=1){
					cout<<"|DESCUENTO DEL 12% EN LA PINTURA SATINADA   |"<<endl;
					cout<<"|NUEVO TOTAL A PAGAR =>"<<f<<"$               |"<<endl;
					o--;
				}
				cout<<"============================================="<<endl;
				system("pause");
				system("cls");
					cout<<"====================FACTURA======================"<<endl;				
					cout<<"|MONTO TOTAL A PAGAR (SIN DESCUENTOS) =>"<<g<<"$ |"<<endl;
					cout<<"|MONTO TOTAL DE DESCUENTOS =>"<<h<<"$             |"<<endl;
					cout<<"|NETO A PAGAR =>"<<neto<<"$                          |"<<endl;
					cout<<"================================================="<<endl;
		 			Datos.pop();
		 			}
		 			system("pause");
		 				break;
		 			case 3:   
					 system("cls");  
				cout<<"==============================="<<endl;
		 		cout<<"|HAZ ELEGIDO LA OPCION SALIR  |"<<endl;
		 		cout<<"==============================="<<endl; 
		 		system("pause");
				 system("cls"); 
				 	cout<<"==============================="<<endl;                              
		 			cout<<"|SALIENDO DEL PROGRAMA....    |"<<endl;     
		 			cout<<"==============================="<<endl;
		 				break;      
		 		
}//fin del switch  
}while(opc!=3);//fin del menu    
}//fin del void menu
int main(int argc, char *argv[]) // inicio del main 
{
menu(); // invocamos la funcion menu 
}// fin del main y del programa...

      