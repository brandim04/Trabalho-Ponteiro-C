#include <stdio.h>
int main() {
int idade;
int *p = &idade;

printf("Digite a idade do aluno: ");
scanf("%d", p);

printf("Idade: %d\n", *p);
printf("Endereco na memoria: %p\n", p);
return 0;
}