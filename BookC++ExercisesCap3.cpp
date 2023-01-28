
/* PRIMERA PARTE DEL EJECICIO
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    double a=0,b;
    while(cin>>a>>b){
        if (a==b)
            cout<<"Los numeros son iguales";
        else if(a>b){
            cout<<"Mayor: "<<a<<" | Menor: "<<b;
            if (a-b<1.0/100)
                cout<<"\nLos numeros difieron en menos que una centecima";
        }
        else{
            cout<<"Mayor: "<<b<<" | Menor: "<<a;
            if (b-a<1.0/100)
                cout<<"\nLos numeros difieron en menos que una centecima";
        }

        cout<<"\n";
    }
}*/

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    double medida;
    char unidad='a';
    while(cin>>medida>>unidad){
        cout<<medida<<unidad<<" Es igual a\n";
        switch(unidad){
            case 'c':
                cout<<"Metros: "<<medida/100<<"Pulgadas: "<<medida/2.54<<"Pies: "<<medida/(2.54*12);
                break;
            case 'm':
                break;
            case 'i':
                break;
            case 'f':
                break;
            default:
                cout<<"Valor no valido";
        }

        cout<<"\n";
    }
}*/

#include <iostream>

using namespace std;
char logica(int numero,int media){
    if(numero<=media)
        return 'S';
    else
        return 'N';
}
void resolver(int numero_adivinar){
    int minimo = 1,mean=0,maximo = 100;
    char respuesta;
    int contador=0;

  //cout << "Piensa en un número entre 1 y 100" << endl;
  //cin>>numero_adivinar;
    while(minimo!=maximo){
        mean=(maximo+minimo)/2;
        cout<<"\nEs el numero menor o igual a"<<mean<<" S/N";
        respuesta=logica(numero_adivinar,mean);
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
string logica2(int numero,int media){
    if(numero<media)
        return "yes";
    else
        return "no";
}
void resolver2(int num){
    string answer = "";
	int guess_max = 100;
	int guess_min = 1;
	while (guess_min != guess_max) {
        cout<<(guess_max + guess_min + 1) / 2<<"__"<<(guess_max + guess_min) / 2<<endl;
		cout << "Is the number you are thinking of less than "
			<< (guess_max + guess_min + 1) / 2 << "?\n";
		answer=logica2(num,(guess_max + guess_min + 1) / 2);
		if (answer == "y" || answer == "Y" || answer == "yes" || answer == "Yes")
			guess_max = (guess_max + guess_min) / 2;
		else if (answer == "n" || answer == "N" || answer == "no" || answer == "No")
			guess_min = (guess_max + guess_min + 1) / 2;
		else {
			cout << "Bad input!\n";
		}
	}
	cout << "The number you are thinking of is " << guess_min << endl;
}
int main() {
    //int numero_adivinar;
    //cout << "Piensa en un número entre 1 y 100" << endl;
    //cin>>numero_adivinar;
    for(int i=7;i<100;i+=9){
        //resolver(i);
        cout<<"\n";
        resolver2(i);
    }
}



