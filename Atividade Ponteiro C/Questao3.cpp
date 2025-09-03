#include <stdio.h>
int main() {
float preco[5];
float *p = preco;

for(int i = 0; i < 5; i++) {
printf("Digite o preco do produto %d: ", i+1);
scanf("%f", p+i);
}

printf("\nPrecos e descontos:\n");
for(int i = 0; i < 5; i++) {
printf("Produto %d: R$ %.2f | Com 10%% de desconto: R$ %.2f\n", i+1, *(p+i), *(p+i)*0.9);
}
return 0;
}