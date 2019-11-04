#include <stdio.h>
int main(void) {

  int primos_necessarios, divisores, primos_encontrados = 0, contador = 2;
  printf("Digite o termo n para ver os n primeiros primos: "); 
  scanf("%d", &primos_necessarios);

  while (primos_encontrados != primos_necessarios) {
    divisores = 0;
    
    for (int i = 2; i < contador; i++) {  
      if (contador%i==0) {divisores++; break;}
    }  
    if (divisores == 0) {
      printf("|| Primo: %d\n", contador); 
      primos_encontrados++;
    } 
    contador++;
  } return 0;
}
