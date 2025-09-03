#include <stdio.h>
int main() {
float notas[6];
float *p = notas;

for(int i = 0; i < 6; i++) {
printf("Digite a nota do aluno %d: ", i+1);
scanf("%f", p+i);
}

printf("\nNotas invertidas:\n");
for(int i = 5; i >= 0; i--) {
printf("%.2f ", *(p+i));
}
printf("\n");
return 0;
}