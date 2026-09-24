/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int n; 
    int i = 1;     
    int soma = 0;  
    
    printf("Digite o valor de N: ");
    scanf("%d", &n); 

    while (i <= n) { 
        soma += i; 
        i++; 
    } 

    printf("Soma = %d\n", soma);

    return 0;
}