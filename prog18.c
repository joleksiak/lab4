#include<stdio.h>

int main(){
  int i;
  printf("Podaj liczbę:\n");
  scanf("%d",&i);
  printf("silnia z %3d wynosi %15d\n",i,silnia(i));
  return 0;
}

int silnia(int n){
  int i; int silnia=1;
  for (i=1;i<=n;i++) silnia *= i;
  return silnia;
}
