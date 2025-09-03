#include <stdio.h>
int main() {
float notas[3][3];
float *p = &notas[0][0];
float soma = 0;

for(int i = 0; i < 3; i++) {
for(int j = 0; j < 3; j++) {
printf("Digite a nota do aluno %d prova %d: ", i+1, j+1);
scanf("%f", (p + i*3 + j));
}
}

printf("\nTodas as notas:\n");
for(int i = 0; i < 3; i++) {
for(int j = 0; j < 3; j++) {
printf("%.2f ", *(p + i*3 + j));
}
printf("\n");
}

for(int i = 0; i < 3; i++) {
soma += *(p + i*3 + i);
}

printf("\nSoma da diagonal principal: %.2f\n", soma);
return 0;
}