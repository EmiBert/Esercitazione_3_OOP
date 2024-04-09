#include <iostream>
#include "ComplexNumber.hpp" // è necessario includere tale header file per poter utilizzare la struttura "ComplexNumber" e le sue operazioni

using namespace std;

int main()
{   // un paio di esempi:
    ComplexNumber c1(1,-2);
    ComplexNumber c2(-3,5);
    ComplexNumber d;

    cout<<"L'inizializzazione di default per i numeri complessi e': "<<d<<"\n"<<endl;
    cout<<"La somma dei numeri complessi c1: "<<c1<<" e c2: "<<c2<<" e' c1+c2= "<<c1+c2<<"\n"<<endl;
    cout<<"Due numeri complessi sono uguali se e solo se hanno la stessa parte reale e la stessa parte immaginaria."<<endl;

    if (c1 == c2)
    {
        cout<<"Quindi c1 e' uguale a c2 \n"<<endl;
    }

    else
    {
        cout<<"Quindi c1 e' diverso da c2 \n"<<endl;
    }


    cout<<"Il complesso coniugato di c1 e': "<<conjugate(c1)<<" mentre quello di c2 e': "<<conjugate(c2)<<endl;

    return 0;
}
