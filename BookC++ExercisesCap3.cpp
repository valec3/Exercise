#include <iostream>
using namespace std;

void resolver(int numero_adivinar){
    int minimo = 1,mean=0,maximo = 100;
    char respuesta;
    int contador=0;
    while(minimo!=maximo){
        mean=(maximo+minimo)/2;
        cout<<"\nEs el numero menor o igual a"<<mean<<" S/N: ";
        cin>>respuesta;
        contador++;
        if (respuesta=='S'){
            maximo=mean;
        }else{
            minimo=mean+1;
        }
    }
    if (contador>7) cout<<"##Intentos excedidos.##";
    cout << "\nEl numero es: " << minimo << endl;
}

int main() {
    int numero_adivinar;
    cout << "Piensa en un número entre 1 y 100: ";
    cin>>numero_adivinar;
    resolver(numero_adivinar);
}
