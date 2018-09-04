#include <stdio.h>
#include <stdlib.h>
//ES UN VALOR QUE SE TOMA ANTES DEL COMPILADO (NO ES UNA VARIABLE).
//UNA CONSTANTE OCUPA UNA DIRECCION DE MEMORIA, EN CAMBIO T NO OCUPA NADA
#define T 10

int main()
{
   int vector[T] = {2,1,9,4,6,7,3,8,5};

   int i;
   int j;
   int aux;

   for(i=0; i<T-1;i++)
    {
        for(j=i+1;j<T;j++)
            {
                if(vector[i]<vector[j])
                    {
                        aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
                    }
            }
    }

    for(i=0; i<T; i++)
    {
        printf("%d\n", vector[i]);
    }

 //vector[T] = {1};  NO SE PUEDE ASIGNAR UN VECTOR EN OTRO VECTOR, SI NO ES EN EL MOMENTO DE SER DECLARADO
   /*for(i=0; i<T; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
   printf("\ntodos los numeros: \n");
   for(i=0; i<T; i++)
    {
        printf("%d\n", vector[i]);
    }
   printf("\ntodos los numeros pares: \n");
   for(i=0; i<T; i++)
    {
        if(vector[i]%2==0)
            {
                printf("%d\n", vector[i]);
            }
    }*/

    return 0;
}
