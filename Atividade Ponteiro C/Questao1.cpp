#include <stdio.h>
int main() {
int cofrinho = 325;
int *p = &cofrinho;

printf("Valor no cofrinho: %d\n", *p);
printf("Endereco na memoria: %p\n", p);
return 0;
}