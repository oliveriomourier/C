/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>


int cantidad_hasta_caracter(char cadena[], char caracter){
    int largo = 0;
    int i = 0;

    while (cadena[i] != '\0' && cadena[i] != caracter){
        largo++;
        i++;
    }
    
    if(largo == strlen(cadena)){
        largo = -1;
    }
    
    return largo;
}


void main()
{
    char cadena[] = "El sol es amarillo.";
    int largo = cantidad_hasta_caracter(cadena, '$');
    printf("%i \n", largo);
    
    char cadena2[] = "El sol es amarillo.";
    int largo2 = cantidad_hasta_caracter(cadena2, 'm');
    printf("%i \n", largo2);
    
    char cadena3[] = "30/06/2021";
    int largo3 = cantidad_hasta_caracter(cadena3, '/');
    printf("%i \n", largo3);
    
    char cadena4[] = "El precio es $2000";
    int largo4 = cantidad_hasta_caracter(cadena4, '0');
    printf("%i \n", largo4);
    
}
