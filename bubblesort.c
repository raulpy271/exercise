
#include <stdio.h>
#define LENGHT 20


void print_vector(int vetor[], int start, int end){
  int j; printf("\n");
  for (j=start;j<end;j++){printf("%d  ", vetor[j]);}
  printf("\n");}


void bubblesort(int vetor[]) {
 int i, aux, contador;
 for (contador = 1; contador < LENGHT; contador++) {
   for (i = 0; i < LENGHT - 1; i++) {
     if (vetor[i] > vetor[i + 1]) {
       aux = vetor[i];
       vetor[i] = vetor[i + 1];
       vetor[i + 1] = aux;}
   }} print_vector(vetor,0, LENGHT);
}



int main() {

int numeros[LENGHT] = {4,-76,34,71,43,-7,0,23,22,44,343,54,666,304,-4,1,-666,1000,101,-103};

int i, response;
printf("quer digitar o vetor [1/0]: ");
scanf("%d", &response);

if (response){
  printf("Digite  20 nUmeros para preencher:\n");
  for (i = 0; i < LENGHT; i++) {
  scanf("%d", &numeros[i]);}
}

printf("\nvetor ordenado:\n");
bubblesort(numeros);

return 0;
}
