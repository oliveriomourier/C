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

void carac_no_alfa(char cadena[]){
    int contador = 0;
    
    for(int i; i < strlen(cadena); i++){
        if(isalpha(cadena[i]) != 0 || cadena[i] == ' '){
            contador++;
        }
    }
    printf("Hay %i caracteres no alfabéticos \n", contador);
}

int main(){
    carac_no_alfa("Ol+v*12ri1o");
    carac_no_alfa("   ");
}

