#include<stdio.h>

struct List
{
	int tab[1000];
	int size;
	int copy[1000];
	int copysize;
};
void add(struct List *, int);
void sho(struct List *, int);
void del(struct List *, int);
void sum(struct List *, int, int);
void rew(struct List *, int, int);
void cpy(struct List *, int, int, int);
void pst(struct List *, int, int);

void add(struct List *list, int n)
{
	if (list->size < 1000)
		list->tab[list->size++] = n;
}
void sho(struct List *list, int i)
{
	if (i < list->size)
	{
		printf("%d ", list->tab[i]);
		i++;
		sho(list, i);
	}
	else printf("\n");
}
void del(struct List *list, int i)
{
	if (i <= list->size)
	{
		list->tab[i] = list->tab[i + 1];
		del(list, i + 1);
	}
	else if (list->size > 0)
	{
		list->size--;
	}
}
void sum(struct List *list, int x, int y)
{
	if (x == y)
		printf("Nieprawidlowe wartosci\n");
	else
	{
		list->tab[x] = list->tab[x] + list->tab[y];
		del(list, y);
	}
}
void rew(struct List *list, int x, int y)
{
	if (x >= list->size || y >= list->size)
	{
		printf("Nieprawidlowa wartosc\n");

	}
	else if (y >= x)
	{
		int tmp = list->tab[x];
		list->tab[x] = list->tab[y];
		list->tab[y] = tmp;
		rew(list, x + 1, y - 1);
	}
}

void cpy(struct List *list, int x, int y, int i) {
	if (x <= y)
	{
		list->copy[i++] = list->tab[x++];
		cpy(list, x, y, i);
	}
	else
	{
		list->copysize = i;
	}
}
void pst(struct List *list, int x, int i)
{
	if (i > list->size && list->size<1000)
		list->size++;
	if (x < list->copysize)
	{
		list->tab[i] = list->copy[x];
		pst(list, x + 1, i + 1);
	}
}
void choose(struct List *list, char* fun)
{
	int a, b;
	if (strcmp(&fun, "sho") == 0)
	{
		sho(list, 0);
	}
	if (strcmp(&fun, "add") == 0)
	{
		scanf("%d", &a);
		add(list, a);
	}
	if (strcmp(&fun, "del") == 0)
	{
		scanf("%d", &a);
		del(list, a - 1);
	}
	if (strcmp(&fun, "rew") == 0)
	{
		scanf("%d %d", &a, &b);
		rew(list, a - 1, b - 1);
	}
	if (strcmp(&fun, "sum") == 0)
	{
		scanf("%d %d", &a, &b);
		sum(list, a - 1, b - 1);
	}
	if (strcmp(&fun, "cpy") == 0)
	{
		scanf("%d %d", &a, &b);
		cpy(list, a - 1, b - 1, 0);
	}
	if (strcmp(&fun, "pst") == 0)
	{
		scanf("%d", &a);
		pst(list, 0, a - 1);
	}
}
int main()
{
	struct List l = { .size = 0,.copysize = 0 };
	int flag = 1;
	char *fun;
	while (flag = 1)
	{
		scanf("%s", &fun);
		choose(&l, fun);
	}
	return 0;
}
