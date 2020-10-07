#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define MAX 10000

int main() {
  int num[MAX];

  int i, k, aux, count;
  int randomNum;
  int clockStart, clockEnd;
  
  clockStart = clock();
  for(k = 0; k<MAX; k++) {
    randomNum = rand()%1000+10;
    num[k] = randomNum;
    printf("num selecionado: %d \n", randomNum);
  }
  printf("\n\n\n");

  for(count = 1; count < MAX; count++) {
    for(i = 0; i<MAX - 1; i++) {
      if(num[i] > num[i+1]) {
        aux = num[i];
        num[i] = num[i + 1];
        num[i + 1] = aux;
      }
    }
  }

  printf("Em ordem crescente: \n\n");
  for(i = 0; i < MAX; i++) {
    printf("%d \n\n", num[i]);
  }

  clockEnd = clock();

  float finalClock;
  finalClock = ((float)clockEnd - (float)clockStart) / 1000000;

  printf("Final: %f \n\n", finalClock);
  return 0;
}
