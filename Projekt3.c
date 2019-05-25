#include <stdio.h>
#include <string.h>
#include<stdbool.h>
#define N 11
#define S 41
bool check(char*, char[][S]);
int count(char[][S]);
void add(char*, char[][S]);
void delete(int, char[][S]);
void append(char[][S]);
int length(char[][S]);
int main()
{
	char tab1[N][S] = { "alpha","texas","charlie","tango" };
	char tab2[N][S] = { "alpha","bravo","delta","tango","whiskey","charlie"};
	int i, j;
	for (i = 0; i < count(tab1); i++)
	{
		for (j = 0; j < count(tab2); j++)
			if (strcmp(tab1[i], tab2[j]) == 0)
			{
				printf("%s\n", tab1[i]);
			}
	}
	return 0;
}
int count(char tab[][S])
{
	int i = 0;
	for (i = 0; tab[i - 1][S]; i++);
	return i;
}
bool check(char* s, char tab[][S])
{
	int i;
	for (i = 0; i < count(tab); i++)
	{
		if (strcmp(tab[i], s) == 0)
		{
			return true;
		}

	}
	return false;
}
void add(char* s, char tab[][S])
{
	if (strlen(s) <= S && count(tab) + 1 < N)
	{
		strcpy(tab[count(tab)], s);
	}
}
void delete(int s, char tab[][S])
{
    if(s<count(tab))
	{
        char* tmp = tab[count(tab) - 1];
        strcpy(tab[s], tmp);
        strcpy(tab[count(tab) - 1], "");
	}
}
void append(char tab[][S])
{
	int i;
	for (i = 0; i < count(tab); i++)
	{
		while (strlen(tab[i]) < S - 1)
		{
			char* tmp = strcat(tab[i], "a");
			strcpy(tab[i], tmp);
		}
	}
}
int length(char tab[][S])
{
	int l = 0, i;
	for (i = 0; i < count(tab); i++)l += strlen(tab[i]);
	return l;
}