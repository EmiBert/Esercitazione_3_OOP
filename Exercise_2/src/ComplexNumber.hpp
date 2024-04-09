#include <iostream>
using namespace std;

struct ComplexNumber    // definizione della struttura ComplexNumber
{   double real;        // attributo parte reale
    double imag;        // attributo parte immaginaria

    ComplexNumber()     // inizializzazione di default
    {   real = 0;
        imag = 0;}

    ComplexNumber(double a,double b)    // inizializzazione tramite passaggio di parametri
    {   real = a;
        imag = b;}
};


ostream& operator<<(ostream& os, const ComplexNumber& c)    // operatore di output
{   if (c.imag < 0)
    {
        os<<c.real<<c.imag<<"i";
    }

    else
    {
        os<<c.real<<"+"<<c.imag<<"i";
    }
    return os;
}



ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2)   // operatore somma
{
    double re = c1.real + c2.real;
    double im = c1.imag + c2.imag;
    ComplexNumber R(re,im);
    return R;
}

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2)   // operatore di controllo dell'uguaglianza
{
    bool R;
    if (c1.real == c2.real && c1.imag==c2.imag)
    {
        R = true;
    }
    else
    {
        R = false;
    }
    return R;
}




ComplexNumber conjugate(const ComplexNumber& a)     // funzione complesso coniugato
{
    ComplexNumber R(a.real,-a.imag);
    return R;

}












