#include<stdio.h>

int main() {

    /*float anos, dias;

    printf("Digite sua idade em anos: ");
    scanf("%f", &anos);

    dias = anos * 365;

    printf("Sua idade me dias e: %0.f.\n", dias);

    printf("\n---------------------------------------------------\n");*/

    char a;
    printf("Digite um caracter e veha-o em decimal, octal e hexadecimal.\n");
    scanf("%c", &a);
    printf("\n%c=%d dec; %o oct; %x hex.\n", a, a, a, a);

    return 0;
}