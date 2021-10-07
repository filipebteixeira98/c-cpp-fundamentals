#include <stdio.h>
#define TAMANHO 10

int fatorial(int num);

int main(int argc, char const *argv[])
{
  /*
  int tamanho;

  printf("%s\n","Recursion studies!");
  printf("Enter any number to get recursive factorial: ");
  scanf("%d",&tamanho);
*/

  int fatorial_aux = fatorial(TAMANHO);
  printf("Factorial of [%d] is equal to %d\n", TAMANHO, fatorial_aux);

  return 0;
}

int fatorial(int num)
{
  if (num == 0 || num == 1)
    return 1;
  else
    return num * fatorial(num - 1);
}
