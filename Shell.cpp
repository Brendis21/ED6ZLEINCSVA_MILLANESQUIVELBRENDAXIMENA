#include <iostream>

using namespace std;


void resultado(int[], int n);
void shell(int[], int n);

int main(){
    int total;
    cout<<"Bienvenido\n";
    cout<<"Introduce el numero total de elementos: \n";
    cin>>total;
    int numero[total];
    for (int i = 0; i < total; i++){
        cout<<"Introduce el elemento " << (i + 1) << "  : \n";
        cin>>numero[i];
    }
    shell(numero, total);
}

void shell(int b[], int n)
{

    int ints, i, aux;
    bool band;
    ints = n;
    while (ints > 1)
    {
        ints = (ints / 2);
        band = true;
        while (band == true)
        {
            band = false;
            i = 0;
            while ((i + ints) <= n)
            {
                if (b[i] > b[i + ints])
                {
                    aux = b[i];
                    b[i] = b[i + ints];
                    b[i + ints] = aux;
                    band = true;
                }
                i++;
                resultado(b, n);
            }
        }
    }
}

void resultado(int b[], int n)
{
    cout<<"Elementos ordenados: " << endl;

    for (int i = 0; i < n; i++)
        cout << " " << b[i] << " ";
}
