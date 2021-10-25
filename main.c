#include <stdio.h>
#include <stdlib.h>

//1
float aplicarAumento (float precio);

int main()
{
 //Cálculo de Aumento

 float precio;
 printf ("Ingrese el importe:")
 scanf("%f", precio);

printf ("El producto tiene un valor de $ %2f, con un aumento del 5%%, quedando un importe final de %2f \n ",precio, aplicarAumento(precio));


return 0;
}

float aplicarAumento(float precio)
{

    float precioNeto;

    precioNeto= precio + (precio*0.05);

    return precioNeto;
}


//2







