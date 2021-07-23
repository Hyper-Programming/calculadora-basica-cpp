#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int opcion;
	float a = 0, b = 0;
	
	do{
		cout<<"<< CALCULADORA BASICA >>"<<endl;
		
		cout<<"1.- SUMA "<<endl;
		cout<<"2.- RESTA "<<endl;
		cout<<"3.- MULTIPLICACION "<<endl;
		cout<<"4.- DIVISION "<<endl;
		cout<<"5.- SALIR "<<endl;
		
		cout<<"Ingresa una opcion: "; cin>>opcion;
		
		system("cls");
		
		switch(opcion){
			case 1:{
				cout<<"<< SUMA >>"<<endl;
				
				cout<<"Introduce el valor para A: "; cin>>a;
				cout<<"Introduce el valor para B: "; cin>>b;
				
				cout<<"El resultado es: "<<a + b<<endl;
				
				system("pause");
				system("cls");
				
				break;
			}
			case 2:{
				cout<<"<< RESTA >>"<<endl;
				
				cout<<"Introduce el valor para A: "; cin>>a;
				cout<<"Introduce el valor para B: "; cin>>b;
				
				cout<<"El resultado es: "<<a - b<<endl;
				
				system("pause");
				system("cls");
				
				break;
			}
			case 3:{
				cout<<"<< MULTIPLICACION >>"<<endl;
				
				cout<<"Introduce el valor para A: "; cin>>a;
				cout<<"Introduce el valor para B: "; cin>>b;
				
				cout<<"El resultado es: "<<a * b<<endl;
				
				system("pause");
				system("cls");
				
				break;
			}
			case 4:{
				cout<<"<< DIVISION >>"<<endl;
				
				cout<<"Introduce el valor para A: "; cin>>a;
				cout<<"Introduce el valor para B: "; cin>>b;
				
				if(b == 0){
					cout<<"B no puede ser igual a 0"<<endl;
				}else{
					cout<<"El resultado es: "<<a / b<<endl;
				}
				
				system("pause");
				system("cls");
				
				break;
			}
			case 5:{
				cout<<"Adios, gracias por utilizar"<<endl;
				
				system("pause");
				system("cls");
				
				break;
			}
			default:{
				cout<<"Solo se permiten opciones del 1 al 5."<<endl;
				system("pause");
				system("cls");
				break;
			}
		}	
	}while(opcion != 5);
	
	getch();
	return 0;
}
