#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <locale.h>

#ifndef SYSTEM_LIB_H
#define SYSTEM_LIB_H

/* register */ unsigned int size;

struct Node
{
	char *title;
	char *author;
	char *subject;
	int book_id;
	struct Node *prox;
};
typedef struct Node node;

int menu(void);
int empty(node *stack);
void option(node *stack, int opt);
void start_stack(node *stack);
void push(node *stack);
void view(node *stack);
void clean(node *stack);
node *create_stack(void);
node *pop(node *stack);

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "English");
	int opt;
	node *stack;

	stack = create_stack();
	start_stack(stack);
	do
	{
		opt = menu();
		option(stack, opt);
	} while (opt);

	free(stack);
	return 0;
}

int menu(void)
{
	int opt;

	printf("1) ADD BOOK\n");
	printf("2) REMOVE BOOK\n");
	printf("3) SHOW BOOKS\n");
	printf("4) SENT BOOKS LIST TO TRASH\n");
	printf("5) GO OUT\n");
	printf("OPTION: ");
	scanf("%d", &opt);

	return opt;
}

int empty(node *stack)
{
	if (stack->prox == NULL)
		return 1;
	else
		return 0;
}

void option(node *stack, int opt)
{
	node *tmp;
	switch (opt)
	{
	case 1:
		push(stack);
		break;
	case 2:
		tmp = pop(stack);
		if (tmp != NULL)
			printf("Removed: %s\n", tmp->title);
		break;
	case 3:
		view(stack);
		break;
	case 4:
		clean(stack);
		start_stack(stack);
		break;
	case 5:
		clean(stack);
		break;
	default:
		printf("Invalid selection!\n");
	}
}

void start_stack(node *stack)
{
	stack->prox = NULL;
	size = 0;
}

void push(node *stack)
{
	node *new = create_stack();
	new->prox = NULL;

	printf("New element: ");
	scanf("%d", new->book_id);

	if (empty(stack))
		stack->prox = new;
	else
	{
		node *tmp;

		while (tmp->prox == NULL)
			tmp->prox = prox;
		tmp->prox = new;
	}

	size++;
}

node *create_stack(void)
{
	node *stack = (node *)malloc(sizeof(node));

	if (!stack)
	{
		perror(strerror(errno));
		return EXIT_FAILURE;
	}
	else
		printf("Dynamic structure created successfully!");

	return stack;
}

node *pop(node *stack)
{
	if (empty(stack))
	{
		printf("Empty Stack!\n");
		return NULL;
	}
	else
	{
	}
}

#endif