#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Se declara variable 
    int resultado, n;
    //Se le pide al usuario que digite un numero para poder realizar la multiplicación
    cout<<"Porfavor ingrese un digito"<< endl;
    cin>> n;
    //Si el numero que ingreso el usuario es negativo se le dice usuario que no se puede realizar la operacion
    if (n<0)
    {
        cout<<"Porfavor ingrese un valor que no sea negativo"<< endl;
        return 0;
    }
    //Se inicia un for
    for (size_t i = 1; i <= 10; i++)
    {
        resultado = (i*n);
        cout<< i << "x" << n << "=" << resultado << " " << endl;
    }
        
    return 0;
}