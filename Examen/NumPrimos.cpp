#include<iostream>
using namespace std;

int main()
{
  int n=0,c=0,c2=0,res=0,nc=0;
  cout<<"Numeros primos"<<endl;
  cout<<"Introduzca el limite de numeros a calcular: "<<endl;
  cin>>n;
  cout<<"Los numeros primos calculados son: "<<endl; 
  for(c=1;c<=n;c++){
    for(c2=1;c2<=c;c2++){
    res=c%c2;
    if(res==0){
    nc=nc+1;
	}
}
    if(nc==2){
    cout<<" "<<c;
    }
    nc=0;
  }
}
