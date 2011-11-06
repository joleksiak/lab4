#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]) {
  int max,los,traf;
  int licz=0;
  srand(0);
  if (argc == 2) max = atoi(argv[1]);
  else max = 1000;
  los = rand ()%max;
  printf("Zgadnij liczbę: ");
  do {  
    scanf("%d", &traf);
    test(traf, los, licz);
    licz++;
  } while (traf!=los);
  printf("Zgadłeś za: %d razem\n\n");

    }

int test (int traf, int los, int licz) {
  int i;
  if (traf==los) printf("Gratulacje, zgadłeś\n\n");
  else if (traf<los){
    i = rand()%3;
    switch (i) {
    case 0:
    printf ("Za mało\n"); break;
    case 1:
      printf ("Podaj więcej\n"); break;
    case 2:
      printf ("Nie tak mało\n"); break;

    }
}

  else if (traf>los){
    i = rand()%3;
    switch (i) {
    case 0:
      printf ("Za dużo\n"); break;
    case 1:
      printf ("Nie tak dużo\n"); break;
    case 2:
      printf ("Podaj mniej\n"); break;

      return 0;
    }
  }
}
