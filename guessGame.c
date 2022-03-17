#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int hasard(int min, int max){
  return (int) (min + ((float) rand() / RAND_MAX * (max - min + 1)));
}


int main(){
  srand(time(NULL));
  int alea, guessingNum, min = 1, max = 100, i = 49;
  alea = hasard(min, max);
  while (i > 1){
    printf("Guess the number between 1 and 100\n");
    scanf("%d", &guessingNum);
    if (guessingNum == alea){
        printf("Congrats! You guessed the number ! It was : %d\n", alea);
    }else{
      printf("%d\tmore chances\n",i);
    }
    i--;
  }
  printf("You didn't guessed the number ... It was %d\n", alea);
  return 0;
}
