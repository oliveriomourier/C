/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>

void contador_numerico(char cadena[]){
    int contador = 0;
    
    for(int i = 0; i < strlen(cadena); i++){
        if(isdigit(cadena[i]) != 0){
            contador++;
        }
    }
    printf("La cantidad de caracteres numericos es: %i \n", contador);
    
}

int main(){
    contador_numerico("Hol3ver456");
}

