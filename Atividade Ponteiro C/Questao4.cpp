#include <stdio.h>
int main() {
int n;
printf("Digite a quantidade de funcionarios: ");
scanf("%d", &n);

int horas[n];
int *p = horas;
int total = 0;

for(int i = 0; i < n; i++) {
printf("Horas trabalhadas pelo funcionario %d: ", i+1);
scanf("%d", p+i);
total += *(p+i);
}

printf("\nTotal de horas trabalhadas: %d\n", total);
return 0;
}