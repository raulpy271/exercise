#include <stdio.h>


int main () {


  //mensagem inicial
  printf("\n     MEDIA PONDERADA\n\nformula:\n\n   (x1 * p1) + (x2 * p2) + ... + (xn * pn)\n  -------------------------------------------\n              p1 + p2 + ... + pn\n\ndigite 0 para ver o resultado\n\n");
  
  
  float result = 0;
  float peso_soma = 0;
  int contador = 1;
  float valor = 1;
  float peso = 1;


  while (valor != 0.0) {


    //lendo e somando valores. termina quando valor = 0


    printf("digite o termo %d: ", contador);
    scanf("%f", &valor);
    printf("digite o peso do termo %d: ", contador);
    scanf("%f", &peso);


    result += valor * peso;
    peso_soma += peso;
    contador++;
  }

  result = result / peso_soma;
  //imprime o resultado com 2 casas decimais
  printf("\nresultado: %.2f\n\n", result);
  return 0;
}

