
#include <stdio.h>

int main()
{
  int a, b, c, d, e, max, min;

  printf("Inserisci il primo numero: ");
  scanf("%d", &a);
  printf("Inserisci il secondo numero: ");
  scanf("%d", &b);
  printf("Inserisci il terzo numero: ");
  scanf("%d", &c);
  printf("Inserisci il quarto numero: ");
  scanf("%d", &d);
  printf("Inserisci il quinto numero: ");
  scanf("%d", &e);

  max = a;
  if (b > max) 
    max = b;
 
  if (c > max) 
    max = c;
 
  if (d > max) 
    max = d;
 
  if (e > max) 
    max = e; 
 
  min=a;
  if (b < min) 
    min = b;
 
  if (c < min) 
    min = c;
 
  if (d < min) 
    min = d;
 
  if (e < min) 
    min = e; 
  
 
  
  printf("Il numero maggiore e': %d\n", max);
  printf("Il numero minore e': %d\n", min);
  return 0;
}
