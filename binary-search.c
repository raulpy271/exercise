
//bubblesort and binary search algorithm

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
   }} //print_vector(vetor,0, LENGHT);
}


int binary_search
(int vetor[], int start, int end, int pattern, int *result_boolean){
  //printf("\nstart: %d, end: %d\n", start, end);
  
  //calcula o indice medio
  int index_medium = start + ((end - start)/2);
  int medium =vetor[index_medium];
  
  if (medium==pattern){*result_boolean =  1;
    printf("\nnumero %d encontrado\n", pattern); return 0;
  }
  
  // se não há mais nem um numero entre end e start 
  //e o intém acima é falso, então o numero procurado não está no vetor
  else if (!(end-start>1)) {*result_boolean =  0; 
    printf("\nnumero %d não encontrado\n", pattern);return 0;
  }
  
  //chama a função novamente, mas considerando apenas metade da vetor
  else if (medium > pattern) { binary_search
    (vetor, start, index_medium,pattern, result_boolean);
  }
  else if (medium < pattern) { binary_search
    (vetor, index_medium, end, pattern, result_boolean);
  }  
  return 0;
}


int main() {
//vetor aleatório
int numeros[LENGHT] = {4,-76,34,71,43,-7,0,23,22,44,343,54,666,304,-4,1,-666,1000,101,-103};

int i, response;
printf("quer digitar o vetor [1/0]: ");
scanf("%d", &response);

if (response){
  printf("Digite  dez nUmeros para preencher:\n");
  for (i = 0; i < LENGHT; i++) {
  scanf("%d", &numeros[i]);}
}

bubblesort(numeros);

int result=0, start = 0, numero_buscado =666;
binary_search(numeros, start, LENGHT, numero_buscado, &result);
return 0;
}

