#include <stdio.h>

void matchGame(int N){
  for (int i = 0; i < N; i++){
    printf("!");
  }
}
int joueur_virtuel (int p, int r){
  int i;
  if (r<=p)
    i=r;
  else
    switch (r%p) {
    case 0 : i=p-1;
      break;
    case 1 : i=1;
      break;
    default : i= r%p -1; 
    }
  return i;
}

void playMatch(int nb_alum, int max){
  int rmMatch1,rmMatch2;
  int c = 0;
  while (nb_alum > 0){
    printf("\n Num of Matches to remove (int) :\n");
    scanf("%d",&rmMatch2);
    if (0<rmMatch2 && rmMatch2<=min(max,nb_alum)){
      nb_alum -= rmMatch2;
      matchGame(nb_alum);
      c++;
    }else{
      printf("You can't select more than the number of match to remove neither remove 0 matches\n");
    }rmMatch1 = joueur_virtuel(max,nb_alum);
    while !(0<rmMatch1 && rmMatch1<=min(max,nb_alum)){
        rmMatch1 = joueur_virtuel(max,nb_alum);
    }nb_alum -= rmMatch1;
    matchGame(nb_alum);
    c++;
  }printf("Game end\n");
  if (c%2 == 1){
    printf("Robot won !")
  }else{
    printf("You won")
    }
}
int main(){
  playMatch(10, 3);
  return 0;
}

/*
void play(int nb_alum, int max){
  int rmMatch;
  while (nb_alum > 0){  
    printf("\n Num of Matches to remove (int) :\n");
    scanf("%d",&rmMatch);
    if (0<rmMatch && rmMatch<=min(max,nb_alum)){
      nb_alum -= rmMatch;
      matchGame(nb_alum);
    }else{
      printf("You can't select more than the number of match to remove neither remove 0 matches\n");
    }
  }
  printf("Game end\n");
} */
