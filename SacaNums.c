
# Se compila en Consola:
$ gcc sumauser.c  -o sumauser
y se ejecuta : $ ./sumauser



#include <stdio.h>
int main()
{
    char seguir;
    int acumulador, numero;

    acumulador = 0;
    do
    {
        printf("\n Introduzca un numero entero: " );
        scanf("%d", &numero );

        acumulador += numero;

        printf("\n Desea introducir otro numero (s/n)?: ");
        getchar ();
        scanf( "%c", &seguir );


    } while ( seguir != 'n' );

printf( "\n La suma de los numeros introducidos es: %d\n", acumulador );

   return 0;

    
}




