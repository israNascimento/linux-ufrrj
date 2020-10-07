#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
  int size;
  printf("Digite o numero de elementos -> ");
  scanf("%d", &size);

  int *num = (int *) malloc(size * sizeof(int));

  int i, k, aux, count;
  int randomNum;
  int clockStart, clockEnd;
  
  clockStart = clock();
  printf("Ola");
  for(k = 0; k<size; k++) {
    randomNum = rand()%1000+10;
    num[k] = randomNum;
  }
  printf("\n\n\n");

  for(count = 1; count < size; count++) {
    for(i = 0; i<size - 1; i++) {
      if(num[i] > num[i+1]) {
        aux = num[i];
        num[i] = num[i + 1];
        num[i + 1] = aux;
      }
    }
  }

  printf("Em ordem crescente: \n\n");
  for(i = 0; i < size; i++) {
    printf("%d \n\n", num[i]);
  }

  clockEnd = clock();

  float finalClock;
  finalClock = ((float)clockEnd - (float)clockStart) / 1000000;

  printf("Final: %f \n\n", finalClock);
  return 0;
}
