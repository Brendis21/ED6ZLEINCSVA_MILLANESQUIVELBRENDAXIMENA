#include<iostream>

using namespace std; 
 
main(){

 	int edad, diaA, mesA, anioA;
 	int dia, mes, anio, anioR;
 	int mesR;
	int diaR;
	int diasdelmes;
	
	
 	cout<<"Ingresa los siguientes datos para calcular tu edad \n";
	cout<<"Dia actual \n";
 	cin>>diaA;
 	cout<<"Año actual \n";
 	cin>>anioA;
 	
 	cout<<"Dia de nacimiento \n";
 	cin>>dia;
 	cout<<"Año de nacimiento \n";
 	cin>>anio;
 	
 	cout<<"Seleccione el mes actual \n ";
 	cout<<"1 = Enero \n";
 	cout<<"2 = Febreo \n";
 	cout<<"3 = Marzo \n";
 	cout<<"4 = Abril \n";
 	cout<<"5 = Mayo \n";
 	cout<<"6 = Junio \n";
 	cout<<"7 = Julio \n";
 	cout<<"8 = Agosto \n";
 	cout<<"9 = Septiembre \n";
 	cout<<"10 = Octubre \n";
 	cout<<"11 = Noviembre \n";
 	cout<<"12 = Diciembre \n";
do {
	cin >>mesA;
if (mesA<1 || mesA>12)
cout<<"Numero incorrecto, intente de nuevo";
}
while (mesA<1 || mesA>12);
 	cout<<"Seleccione el mes de nacimiento \n";
 	cout<<"1 = Enero \n";
 	cout<<"2 = Febreo \n";
 	cout<<"3 = Marzo \n";
 	cout<<"4 = Abril \n";
 	cout<<"5 = Mayo \n";
 	cout<<"6 = Junio \n";
 	cout<<"7 = Julio \n";
 	cout<<"8 = Agosto \n";
 	cout<<"9 = Septiembre \n";
 	cout<<"10 = Octubre \n";
 	cout<<"11 = Noviembre \n";
 	cout<<"12 = Diciembre \n";

do
{
	cin>>mes;
if(mes<1||mes>12){
	cout<<"Numero incorrecto, intente de nuevo";
}
}while(mes<1||mes>12);
if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)
diasdelmes=31;
if(mes==2)
diasdelmes==28;
if(mes==4||mes==6||mes==9||mes==11)
diasdelmes==30;
anioR = anioA - anio;
mesR = mesA - mes;
diaR = diaA - dia;

if(diaR<0){
	diaR= diaR + diasdelmes;
	mesR = mesR - 1;
}

if(mesR<0){
	mesR = mesR + 12;
	anioR= anioR-1;
}
cout<<"Usted tiene \n";
cout << "Años: " << anioR<< endl;
cout << "Dias: " << diaR << endl;
cout << "Mese: " << mes << endl;
}


