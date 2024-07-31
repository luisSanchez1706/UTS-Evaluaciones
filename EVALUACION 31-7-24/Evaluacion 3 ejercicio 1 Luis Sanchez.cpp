//Luis Sanchez C.I:30.324.680
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stack>     //Librerias
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <queue>
using namespace std;
struct datoos{
string nombre;    //declaramos el struct y sus variables 
string cedula;
int nota,nota2,nota3,nota4,nota5;
};
int notas[5],notas2[5];  
queue<datoos>datosA; //declaramos las variables, la cola y el struct dentro de una variable
datoos datos;
int o,op,a,b;
string resp;
void menu(){  //iniciamos el menu
	do{//inicio del do
	system("cls");
	cout<<"==============BIENVENIDO ESTUDIANTE=============="<<endl;
	cout<<""<<endl;
	cout<<"============MENU PRINCIPAL==========="<<endl;
	cout<<"|1.AGREGAR NOTAS                    |"<<endl;
	cout<<"|2.ELIMINAR NOTAS                   |"<<endl;
	cout<<"|3.VER NOTAS                        |"<<endl;   //menu de respuestas 
	cout<<"|4.SALIR DEL PROGRAMA....           |"<<endl;
	cout<<"====================================="<<endl;
	cout<<"SELECCIONE UNA OPCION:";
	cin>>op;
		 switch(op){
		 	case 1:
		 		system("cls");
		 		cout<<"============================================"<<endl;
		 		cout<<"|HAZ ELEGIDO LA OPCION AGREGAR NOTAS       |"<<endl;
		 		cout<<"============================================"<<endl;
		 		system("pause");
		 		system("cls");
		 		cout<<"=============================================="<<endl;
		 		cout<<"|CUANTAS NOTAS DE ESTUDIANTES VA A AGREGAR?  |"<<endl;
		 		cout<<"=============================================="<<endl;
		 		cout<<"RESPUESTA:";
		 		cin>>a;
		 		for(int i=0;i<a;i++){  //inicio del for 
		 		system("cls");
cout<<"====================================="<<endl;
cout<<"POR FAVOR INGRESE SU NOMBRE         |"<<endl;
cout<<"====================================="<<endl;
cout<<"RESPUETA:";
cin>>datos.nombre;           //agregamos los datos pertinentes 
system("cls");
cout<<"====================================="<<endl;
cout<<"POR FAVOR INGRESE SU CEDULA         |"<<endl;
cout<<"====================================="<<endl;
cout<<"RESPUETA:";
cin>>datos.cedula;
system("pause");
system("cls");
cout<<"==================================================================================="<<endl;
cout<<"|AHORA SE LE PEDIRA QUE INGRESE LAS NOTAS OBTENIDAS DE LAS EVALUACIONES REALIZADAS|"<<endl;
cout<<"==================================================================================="<<endl;
cout<<""<<endl;
cout<<"=============================================="<<endl;
cout<<"|PRIMERA EVALUACION |EXAMEN| [VALOR 25 PUNTO]|"<<endl;
cout<<"=============================================="<<endl;
cout<<"INGRESE SU NOTA:";
cin>>datos.nota;
cout<<"=============================================="<<endl;
cout<<"|SEGUNDA EVALUACION |EXAMEN| [VALOR 25 PUNTO]|"<<endl;
cout<<"=============================================="<<endl;
cout<<"INGRESE SU NOTA:";
cin>>datos.nota2;
cout<<"=============================================="<<endl;
cout<<"|TERCERA EVALUACION |EXAMEN| [VALOR 25 PUNTO]|"<<endl;
cout<<"=============================================="<<endl;       //agregamos los datos pertinentes 
cout<<"INGRESE SU NOTA:";
cin>>datos.nota3;
cout<<"=========================================================="<<endl;
cout<<"|CUARTA EVALUACION |EVALUACION CONTINUA| [VALOR 10 PUNTO]|"<<endl;
cout<<"=========================================================="<<endl;
cout<<"INGRESE SU NOTA:";
cin>>datos.nota4;
cout<<"========================================================="<<endl;
cout<<"|QUINTA EVALUACION |TRABAJOS PRACTICOS| [VALOR 15 PUNTO]|"<<endl;
cout<<"========================================================="<<endl;
cout<<"INGRESE SU NOTA:";
cin>>datos.nota5;
notas[i]=(datos.nota+datos.nota2+datos.nota3+datos.nota4+datos.nota5)/5; 
notas2[i]=datos.nota+datos.nota2+datos.nota3+datos.nota4+datos.nota5;   //operaciones necesarias para la nota 
cout<<"----------------------------"<<endl;
system("cls");
o++;
datosA.push({datos.nombre,datos.cedula,datos.nota,datos.nota2,datos.nota3,datos.nota4,datos.nota5});
}
break;
    		case 2:
    			system("cls");	
				cout<<"============================================"<<endl;
		 		cout<<"|HAZ ELEGIDO LA OPCION ELIMINAR DE LA COLA|"<<endl;
		 		cout<<"============================================"<<endl;
					 system("pause");
					 system("cls");
			 		cout<<"========================================="<<endl;
    				cout<<"|DESEA ELIMINAR NOTAS DE LA COLA?       |"<<endl;
     				cout<<"                 SI/NO                  |"<<endl;   //validacion necesaria para evitar equivocaciones
     				cout<<"========================================="<<endl;
     				cout<<"RESPUESTA:";
     			cin>>resp;
     			if(resp=="si"){
     				system("cls");
     				cout<<"===================================================="<<endl;
     				cout<<"|SE HAN ELIMINADO LAS NOTAS DEL ALUMNO MAS RECIENTE|"<<endl;  //en caso de querer eliminar una variable de la cola
     				cout<<"===================================================="<<endl;
     				system("pause");
     				datosA.pop();
				 }else{
				 	system("cls");
					cout<<"==================================================="<<endl;
				 	cout<<"|SELECCIONO |NO| SE REGRESA AL MENU               |"<<endl;
				 	cout<<"==================================================="<<endl;
					system("pause");
				 }
				 break;
				 	case 3:
				 	system("cls");	
				cout<<"================================="<<endl;
		 		cout<<"|HAZ ELEGIDO LA OPCION VER NOTAS|"<<endl;
		 		cout<<"================================="<<endl;
					 system("pause");
					 system("cls");
				 		for(int i=0;i<o;i++){ //inicio del segundo for 
	datos=datosA.front();
	cout<<"=========================NOTAS DEL ALUMNO=============================="<<endl;
	cout<<"======================MATERIA: PROGRAMACION I=========================="<<endl;
	cout<<"NOMBRE DEL ALUMNO:"<<datos.nombre<<"                                                |"<<endl;
	cout<<"CEDULA DEL ALUMNO:"<<datos.cedula<<"                                            |"<<endl;         //mostramos los  resultados 
	cout<<"NOTA DE LA PRIMERA EVALUACION |EXAMEN| [VALOR 25 PUNTO]:"<<datos.nota<<"            |"<<endl;
	cout<<"NOTA DE LA SEGUNDA EVALUACION |EXAMEN| [VALOR 25 PUNTO]:"<<datos.nota2<<"            |"<<endl;
	cout<<"NOTA DE LA TERCERA EVALUACION |EXAMEN| [VALOR 25 PUNTO]:"<<datos.nota3<<"            |"<<endl;
	cout<<"NOTA DE LA CUARTA EVALUACION |EVALUACION CONTINUA| [VALOR 10 PUNTO]:"<<datos.nota4<<"|"<<endl;
	cout<<"NOTA DE LA QUINTA EVALUACION |TRABAJOS PRACTICOS| [VALOR 15 PUNTO]:"<<datos.nota5<<" |"<<endl;
	cout<<"======================================================================="<<endl;
	//mostramos las notas 
	system("pause");
	//inicio de las validaciones necesarias para pbtener cada nota 
	if(notas2[i]>=78){	
	cout<<"|NOTA TOTAL DE ALUMNO:"<<notas2[i]<<"/100 => "<<notas[i]<<"/20                             |"<<endl;
	cout<<"|EL ALUMNO APROBO LA MATERIA CON UNA |A| !!FELICIDADES!!           |"<<endl;
}
	if(notas2[i]>=63&&notas2[i]<78){
	cout<<"|NOTA TOTAL DE ALUMNO:"<<notas2[i]<<"/100 => "<<notas[i]<<"/20                             |"<<endl;
	cout<<"|EL ALUMNO APROBO LA MATERIA CON UNA |B| !!FELICIDADES!!           |"<<endl;
}
	if(notas2[i]>=48&&notas2[i]<63){
	cout<<"|NOTA TOTAL DE ALUMNO:"<<notas2[i]<<"/100 => "<<notas[i]<<"/20                             |"<<endl;
	cout<<"|EL ALUMNO APROBO LA MATERIA CON UNA |C| !!FELICIDADES!!           |"<<endl;
}
	if(notas2[i]<48){
	cout<<"|NOTA TOTAL DE ALUMNO:"<<notas2[i]<<"/100 => "<<notas[i]<<"/20                             |"<<endl;
	cout<<"|EL ALUMNO NO APROBO LA MATERIA |D|                                 |"<<endl;
}//fin de las validaciones 
	cout<<"======================================================================="<<endl;
	datosA.pop();
}//fin del segundo for 
o--;
system("pause");
					break;
						case 4:
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
							
}// fin del switch 
}while(op!=4);	//fin del menu
}  // fin del void menu
int main(int argc, char *argv[]) //inicio del main 
{
	menu(); //invocamos la funcion menu 
}//fin del main y del programa...
