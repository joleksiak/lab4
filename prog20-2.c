#include<stdio.h>
#include<math.h>

void reszta(int m){
  if (m>0) {
    printf("%d",m%10);
    reszta(m/10);
  }
}

void reszta2(int m){
  while (m>0){
   printf("%d",m%10);
   m=m/10;
  }
}

int main(){
  printf("\n");
  reszta2(1410);
  printf("\n\n");
  return 0;

}
