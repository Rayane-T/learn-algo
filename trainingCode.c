

#include <stdio.h>
#define N = 16

void miroir(int tab[N], int n){
  int i,j,temp;
  j = n-1;
  i = 0;
  while(i<j){
    temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
    i++;
    j--;

  }
}

int palindrome(char mot[]){
  int i;
  int taille;
  int difference = 1;
  taille = strlen(mot);
  for (i=0,i< taille/2 && difference == 1; i++){
    if mot[i]! = mot[taille-1-i]){
      difference = 0;
    }
  }
  return difference;
} // mot[100] = "abcde";

int minmaj(char mot[]){
  int i, j, taille;
  taille = strlen(mot);
  for(i = 0, i<taille; i++){
    j = mot[i];
    if (j < 97){
      j += 32;
      mot[i] = char(j);
   }
  }
}
int main(){
  char mot[N];
  printf("entrez votre mot \n");
  scanf("%s", mot );    // tableau de chaine de caractere ne marche avec les %s 
  minmaj(mot);
  printf("le mot en majuscule: %s\n", mot);
} 

//erreur a regler
void supression(float tab[], int n){
  int k, i= 0;
  scanf("Veuillez entrer l'indice de la case a supprimer%d\n", &k);
  if (0<j<taille){
    for (k = i; k <= n-2; k++){
      tab[k] = tab[k+1];
    }
  }
}

int main(){
  float tab[] = "12345678890";
  supression(tab, 12);
  return 0;
} 

int caractere_present (char c, char mot[N]){
  int i = 0;
  while (mot[i] != '\0' && mot[i]! = c){
    i++;
  }
  if(mot[i]==c){
    return 1;
  }
  else return 0;
}

int motdansmot(char mot1[N], char mot 2[N]){
  int i = 0;
  int touspresent = 1;
  while (mot1[i]!= '10'&& touspresent == 1){
    if (!caractere_present(mot1[i], mot2){
      touspresent= 0;
    }
    i++;
  }
}

int estVoyelle(char c){
  return (c=='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'y')
}

void effaceVoyelle( char mot[N], char motres[N]){
  int i = 0;
  int j = 0;
  while (mot[i]!='\0'){
    if (!estVoyelle(mot[i])){
      motres[j] = mot[i]; j++
    }
  }i++;
  motres[j] = '\0';
}



void supression(float tab[], int taille, int indice){
  for (; indice < taille-1; indice++){
    tab[indice]= tab[indice+1];
  }
}

void insertion(float tab[],int taille, int pos, int val){
  for (; pos < taille; pos++){
    temp = tab[pos];
    tab[pos] = val;
    tab[pos+1] = temp;
  }
}

//TP2 
#include <stdio.h>

int bissextille(int annee){
    if (annee%4 == 0){
        if (annee%100 == 0 && annee%400 != 0){
          return 0;}
        else{
          return 1;
        }
    }
    return 0;
}

void lendemain(int day, int month, int year){
  if (0<= day && day <=30){
    if(month == 12 && day == 30){
      printf("01-01-%d\n", year+1);
    }
    else if (day == 30){
      day = 01;
      month +=1;
      printf("%d,%d,%d\n", day, month, year);
    }
    else {
      day +=1;
      printf("%d,%d,%d\n", day, month, year); }
  }
}

int main(){
  lendemain(1,1,2012);
  return 0;
}
#include <stdio.h>

void supression(float tab[], int taille, int indice){
  for (; indice < taille-1; indice++){
    tab[indice]= tab[indice+1];
  }
}

void insertion(float tab[],int taille, int pos, int val){
  for (; pos < taille; pos++){
    temp = tab[pos];
    tab[pos] = val;
    tab[pos+1] = temp;
  }
}

int dichotomie(int tab[], int taille, int valeur){
  int debut_fenetre = 0;
  int fin_fenetre = taille-1;
  int pivot = -1;
  while (debut_fenetre <= fin_fenetre){
    pivot = (fin_fenetre + debut_fenetre)/2;
    if (tab[pivot] == valeur){
      return pivot;
    }
    else if(tab[pivot] > valeur){
      fin_fenetre = pivot - 1;
    }
    else{
      debut_fenetre = pivot+1;
    }
  }
  return -1;
}
//exp liste = [1,2,4,6,10,12] taille = 6 valeur = 10

int main(){
  printf("%d\n", dichotomie({1,2,4,6,10,12}, 6, 10));
  return 0;
}

#include <stdio.h>
#define N 42

int nombreDeZero(int n[N][N]){
  int compte = 0;
  for (int i = 0; i<N; i++){
    for(int j = 0; j<N;j++){
      if(n[i][j]== 0){
        compte ++;
      }
    }
  }
  return compte;
}
int estDiagonale(int mat[N][N]){
  for (int i = 0; i < N; i++){
    for(int j = 0; j< N; j++){
      if ((i!=j)&&(mat[i][j] != 0)){
        return 0;
      }
    }
  }
  return 0;
}

int estSymetrique(int mat[N][N]){
  for (int i = 0; i < N; i++){
    for(int j = 0; j< N; j++){
      if (mat[i][j]!= mat[j][i]){
        return 0;
      }
    }
  }
  return 1;
}

void transpose(int mat[N][N]){
  float tmp;
  for(int i = 0; i < N; i++){
    for(int j = 0; j< N; j++){
      tmp = mat[i][j];
      mat[i][j] = mat[j][i];
      mat[j][i] = tmp;
    }
  }
}

void addtion(float A[N][N], float B[N][N], float C[N][N]){
  for(int i = 0; i < N; i++){
    for(int j = 0; j< N; j++){
      C[i][j] = A[i][j] + B[i][j];
    }
  }
}
void multiplication(float A[N][N], float B[N][N], float C[N][N]){
  for (int i = 0; i < N; i++){
    for(int j = 0; j< N; j++){
      C[i][j] = 0;
      for(int k = 0; k < N; k++){
        C[i][j] = A[i][k] * B[k][j];
      }
    }
  }
}

#include <stdio.h>

int calculatrice(){
  float operande1, operande2, resultat;
  char operateur;
  scanf("Veuillez saisir deux opérande et un opérateur : %f %f %c\n", &operande1, &operande2, &operateur);
  if (operateur == "+"){
    resultat = operande1 + operande2;
  }else if (operateur == "-"){
    resultat = operande1 - operande2;
  }else if (operateur == "*"){
    resultat = operande1 * operande2;
  }else{
    resultat = operande1 / operande2;
  }
  return resultat;
}

int main(){
  printf("%d\n", calculatrice());
  return 0;
}

void fct(int *p){
  *p = (*p)*2;
}

int main(){
  int v = 42;
  fct(&v);
  printf("v = %d\n", v);
  return 0;
}
//----------------------------------------------------------------

int* fct(int init){
  int *p = NULL;
  p = malloc(sizeof(int));
  *p = init;
  return p;
}

int main(){
  int p2=NULL;
  p2 =fct(30);
  printf("p2 = %d\n", *p2);
  return 0;
}

#include <stdio.h>

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
