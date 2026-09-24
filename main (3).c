/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() {

	int contador = 1;
	float nota;
	float soma = 0;

	while (contador <= 5) {
		printf("Nota %d: ", contador);
		scanf("%f", &nota);
		
		soma += nota;
		contador++;
	}
	
	float media = soma / 5.0f;
	printf("Media = %.2f\n", media);

	return 0;
}