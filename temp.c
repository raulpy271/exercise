#include <stdio.h>

int main(void) {
  // variaveis, armazenam temperatura
  float t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, media; 
  int menor_que_25 = 0, maior_que_30 = 0;

  printf("\nDigite a temperatura\ncidade 1: ");
  scanf("%f", &t1);
  printf("\ncidade 2: ");
  scanf("%f", &t2);
  printf("\ncidade 3: ");
  scanf("%f", &t3);
  printf("\ncidade 4: ");
  scanf("%f", &t4);
  printf("\ncidade 5: ");
  scanf("%f", &t5);
  printf("\ncidade 6: ");
  scanf("%f", &t6);
  printf("\ncidade 7: ");
  scanf("%f", &t7);
  printf("\ncidade 8: ");
  scanf("%f", &t8);
  printf("\ncidade 9: ");
  scanf("%f", &t9);
  printf("\ncidade 10: ");
  scanf("%f", &t10);

  menor_que_25 = (t1 < 25)+(t2 < 25)+(t3 < 25)+(t4 < 25)+(t5 < 25)
  +(t6 < 25)+(t7 < 25)+(t8 < 25)+(t9 < 25)+(t10 < 25);
  maior_que_30 = (t1 > 30)+(t2 > 30)+(t3 > 30)+(t4 > 30)+(t5 > 30)
  +(t6 > 30)+(t7 > 30)+(t8 > 30)+(t9 > 30)+(t10 > 30);


  media = (t1+t2+t3+t4+t5+t6+t7+t8+t9+t10)/10.0;
  printf("A temperatura media entre as 10 cidades: %.2f\nA quantidade de municipios com temperatura inferior a 25c: %d\nA quantidade de municipios com temperatura maior que 30c: %d\n", media, menor_que_25, maior_que_30);
  return 0;
}
