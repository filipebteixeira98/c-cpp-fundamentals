#include <stdio.h>
#include <string.h>

typedef struct book
{
  char *title;
  char author[50];
  char subject[50];
  int book_id;
} Book;

void print_struct(struct book *first);

int main(int argc, char const *argv[])
{

  Book first;

  first.title, "C Completo e Total";
  strcpy(first.author, "Hebert Shildt");
  strcpy(first.subject, "Programming");
  first.book_id = 1;

  print_struct(&first);

  return 0;
}

void print_struct(struct book *first)
{
  printf("%s\n", first->title);
  printf("%s\n", first->author);
  printf("%s\n", first->subject);
  printf("%d\n", first->book_id);
}
