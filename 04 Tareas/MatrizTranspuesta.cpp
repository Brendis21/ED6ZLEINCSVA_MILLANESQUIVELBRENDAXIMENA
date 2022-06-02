#include <iostream>

using namespace std;

int main(){
	int i, m, n, b;
	int numeros [10][10];
	
	
	cout<<"Matrices \n";
	cout<<"Ingrese el numero de filas que desea que tenga su matriz \n";
	cin>>m;
	cout<<"Ingrese el numero de columnas que desea que tenga su matriz \n";
	cin>>n;
	
	for(i=0; i<m; i++){
		for(int b=0; b<n; b++){
			cout<<"Digite los numeros de la matriz ["<<i<<"]["<<b<<"]: ";
			cin>>numeros[i][b];
		}
	} 
	
	cout<<"Matriz original \n";
		for(i=0; i<m; i++){
			for(b=0; b<n; b++){
				cout<<numeros[i][b];		
             }
             cout<<"\n";
        }
        
    
    
	cout<<"Matriz transpuesta \n";
    	for(i=0; i<m; i++){
			for(b=0; b<n; b++){
				cout<<numeros[b][i];		
             }
             cout<<"\n";
        }
	
	
	return 0;
}
