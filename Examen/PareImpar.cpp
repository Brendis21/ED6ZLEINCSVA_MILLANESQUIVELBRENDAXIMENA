#include <iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Bienvenido"<<endl;
  cout<<"Coloque un numero: "<<endl;
  cin>>num;
  if(num % 2 == 0)
      cout<<num<<"Este numero es par";
  else
      cout<<num<<"Este numero es impar";
  return 0;
}
