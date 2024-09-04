#include <stdio.h>

int main() {
    // Write C code here
   int N ; 
   printf(" veuiller entrer la valeur de N : ");
  scanf("%d" ,&N ) ;
  if (N%2 ==0 ) 
  
  printf(" Le nombre %d est un nombre pair" , N);
  else
    printf("Le nombre %d est un nombre impair" , N);

    return 0;
}