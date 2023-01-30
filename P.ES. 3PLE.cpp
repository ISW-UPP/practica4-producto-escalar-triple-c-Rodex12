#include <iostream>
 
using namespace std;

int main()
{

float vector1[3];
    float vector2[3];
    float vector3[3];
    double i, j, k, i1, j1, k1, resul[3], suma;
    int ix;

    //Pedir los datos del primer vector
    for (ix = 0; ix < 3; ix++)
    {
        cout << "Introduce el " << ix + 1 << " valor del primer vector: " << endl;
        cin >> vector1[ix];
    }
    //Pedir los datos del segundo vector
    for (ix = 0; ix < 3; ix++)
    {
        cout << "Introduce el " << ix + 1<< " valor del segundo vector: " << endl;
        cin >> vector2[ix];
    }
     //Pedir los datos del tercer vector
    for (ix = 0; ix < 3; ix++)
    {
        cout << "Introduce el " << ix + 1 << " valor del tercer vector: " << endl;
        cin >> vector3[ix];
    }
    //Producto cruz (B x C):
	i = (vector2[1] * vector3[2]) - (vector2[2] * vector3[1]);
	j = - ((vector2[0] * vector3[2]) - (vector2[2] * vector3[0]));
	k = (vector2[0] * vector3[1]) - (vector2[1] * vector3[0]);
	
	//Calcular la multiplicacion del vector 1 (A) por el producto cruz:
    
    i1 = vector1[0] * i;
    j1 = vector1[1] * j;
    k1 = vector1[2] * k;
    
    //Suma de las multiplicaciones:

    suma = i1 + j1 + k1;
    
    //Resultado final (suma de las 2 multiplicaciones):
    cout << "El producto escalar triple es: "<< suma<< endl;
    
    return 0;
    
}
