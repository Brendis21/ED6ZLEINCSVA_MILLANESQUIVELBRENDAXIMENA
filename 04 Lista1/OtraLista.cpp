//Lista con apuntadores

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<iostream>

/*
studio es la libreria estandar de ++
para el manejo de entradas y salidas en consola 

stdlib es la libreria standar de estructuras de datos en c++, 
para listas, pilas, colas, arbol
grafos

conio es la libreria standar para el manejo de
manupulacion de la pantalla, pausar, colores,
manupulacion de ventanas 
*/

using namespace std;

//definicion de la lista 

struct dato{
	int i;
	dato *s;//nodo siguiente
}*a, *i, *p, *e;

//metodos 

int buscar(int d);
void insertar(void);
void mostrar(void):
void borrar(void);
void menu(void);
//void guardar(void);
//void cargar(void);

//principal
main(){
	menu();
}

//menu

void menu(void){
	int opc, da;
	do{
		//imprimir el menu
		cout<<"Ejemplo de una lista con apuntadores";
		cout<<"\n 1.- Buscar datos";
		cout<<"\n 2.- Insertar datos";
		cout<<"\n 3.- Mostrar datos";
		cout<<"\n 4.- Borrar datos";
		cout<<"\n 5.- Guardar datos en un archivo";
		cout<<"\n 6.- Cargar datos en un archivo";
		cout<<"\n 7.- Salir";
		cout<<"\n Seleccione la opcion deseada";
		cin>>opc;
		
		switch(opc){
			case 1: 
			//buscar
				cout<<"\n Ingresa el dato a buscar";
				cin>>da;
				if(buscar(da)){
					cout<<"Dato si existe wiiii";
				}else{
					cout<<"Dato no existe solo juguito contigo T_T";
					getch();//pausa
				}
				break;
				
			case 2:
				//ingresar
				cout<<"\n Ingresa el dato:";
				cin>>da;
				insertar(da);
				break;
				
			case 3:
				//mostrar
				mostrar();
				break;
				
			case 4:
				//borrar
				borrar();
				break;
				
			case 5:
				//guardar
				//guardar();
				break;
				
			case 6:
				//cargar
				//cargar();
				break;
				
			case 7:
				//salir
				cout<<"\n Ayos, gracias uwu";
				getch;
				//antes de salir del programa
				//hay que borrar todos los datos
				//dela lista
			p = i;
			while(p){
				a = p;
				p = p->s;
				delete(a);
			}
			//salir
			exit(0);
				
		default:
			cout<<"Aprenda a leer, opcion invalida";
			getch();	
		}
		
		
	}while(opc);
}


//mostrar

void mostrar(void){
	int cont = 1;
	//saber si hay una lista
	if(!i){
		cout<<"No hay lista para mostrar";
		getch();
		return;
	}
	p = i;
	cout<<"\n\n";
	/*
	como si existe un dato para la lista
	tenemos que empezar a recorrerla 
	por cada uno de los elementos
	*/
	while(p){
		cout<<cont++<<"\nValor: "<<p->i<<endl;
		p = p -> s;
	}
	cout<<"\n Fin de la lista";
	getch();	
}

//buscar
int buscar(int d){
	//saber si hay una lista
	if(!i){
		cout<<"No hay lista para mostrar";
		getch();
		return;
	}
	
	//si hay
	p = i;
	a = NULL;
	
	while(p->s && p->i < d){
		//recorrer los valores de la lista
		a = p;
		p = p->s;
	}
	
	return (p->i == d?1:0);
}

/*
para insertar cuantos caminos hay?
1.- la primera vez que se crea un dato

se debe crear el nodo y verificar los apuntadores

2.- cuando esta enmedio 

se debe de buscar donde se va a ingresar
se debe de acomodar el apuntador anterior
y el apuntador siguiente (apuntador que apunta)

3.- final solo se inserta y se ajusta el apuntador


