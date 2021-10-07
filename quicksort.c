#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void imprime_vetor(int *vetor, int quantidade);
void quicksort(int vetor[], int primeiro, int ultimo);
int *percorre_vetor(int *pointer, int quantidade);
int *cria_dinamica(int quantidade);

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  srand((unsigned)time(NULL));
  int quantidade, *array;

  printf("Determine o índice do vetor: ");
  scanf("%d", &quantidade);

  array = cria_dinamica(quantidade);
  percorre_vetor(array, quantidade);
  quicksort(array, 0, 4);
  imprime_vetor(array, quantidade);
}

void imprime_vetor(int *vetor, int quantidade)
{
  int contador;

  for (contador = 0; contador < quantidade; contador++)
    printf("%d\n", *(vetor + contador));
}

void quicksort(int *vetor, int primeiro, int ultimo)
{
  int first = primeiro, last = ultimo, medio = vetor[(first + last) / 2], aux;

  do
  {
    while (vetor[first] < medio)
      first++;
    while (vetor[last] > medio)
      last--;
    if (first <= last)
    {
      aux = vetor[first];
      vetor[first] = vetor[last];
      vetor[last] = aux;
      first++;
      last--;
    }
  } while (first <= last);
  if (primeiro < last)
    quicksort(vetor, primeiro, last);
  if (ultimo < first)
    quicksort(vetor, first, ultimo);
}

int *percorre_vetor(int *pointer, int quantidade)
{
  int contador;

  for (contador = 0; contador < quantidade; contador++)
  {
    printf("Digite o valor da posição [%d] do vetor: ", contador);
    scanf("%d", (pointer + contador));
  }
}

int *cria_dinamica(int quantidade)
{
  int *vetor = (int *)malloc(quantidade * sizeof(int));

  if (!vetor)
    printf("Memória insuficiente para alocação dinâmica em heap!");
  else
    printf("Vetor alocado dinamicamente com sucesso!\n");

  return vetor;
}
