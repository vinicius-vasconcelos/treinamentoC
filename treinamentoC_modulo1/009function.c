#include<stdio.h>
#include<curses.h>

void doisBeep(){
	int k;
	printf("\x7");
	for(k = 1; k < 5000; k++)
		;
	printf("\x7");
}

int main(){
	doisBeep();
	printf("Digite um caracter: ");
	getchar();
	doisBeep();
	return 0;
}
