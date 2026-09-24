/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() {

	float nota;
	float soma = 0;
	int quantidade = 0;
	printf("Digite uma nota ou -1 para sair: ");
	scanf("%f", &nota);
	while (nota != -1) {
		soma += nota;
		quantidade++;
		printf("Digite uma nota ou -1 para sair: ");
		scanf("%f", &nota);
	}
	if (quantidade > 0) {
		printf("Media = %.2f\n", soma / quantidade);
	}
	return 0;
}