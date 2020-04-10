#include<stdio.h>

int main() {

    int ai = 2;
    unsigned int j = 65000;
    int i = j;

    printf("Valor = %d \n Endereco = %p \n", ai, &ai);
    printf("%d %x\n", i, j);

    return 0;
}