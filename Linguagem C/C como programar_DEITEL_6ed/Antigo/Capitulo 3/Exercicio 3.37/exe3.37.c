/* writing errors */
#include <stdio.h>
#include <stdlib.h>
int main () {
  int contador, num;
  //num = 0;
  contador = 1;

  printf("Digite u numero para iniciar: ");
  scanf("%d", &num);
  
  while(contador <= 3000000){
      contador++;
      num++;
      
      if (num == 1000000) {
          printf("\nO numero e %d\n", num);
      }
      if (num == 2000000) {
          printf("\nO numero e %d\n", num);
      }
      if (num == 3000000) {
          printf("\nO numero e %d\n", num);
      }
  }
  
  system("pause");
  return 0;
}