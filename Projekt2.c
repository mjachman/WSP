#include<stdio.h>
#include<stdbool.h>
int N, x, i, j, count, ii=0, mul, tmp, y, a, b, size = 1;
int X[6], A[6], B[6];
bool flag[1000000];
int main()
{
	printf("Podaj liczbe naturalna z zakresu <1;6>: ");
	scanf("%d", &N);
	if (N < 1 && N>6 && N % 1 != 1)
	{
		printf("Nieprawidlowa liczba");
		return 0;
	}
	printf("Podaj liczbe naturalna maksymalnie %d cyfrowa: ",N);
	scanf("%d", &x);
	int zakres = x;
	while (zakres > 0)
	{
		zakres /= 10;
		++count;
	}
	if (count > N)
	{
		printf("liczba nie miesci sie w zakresie\n");
		return 0;
	}
	for (i = 0; i < N; i++) size *= 10;
	for (i = 0; i < size; i++) flag[i] = true;
	while (flag[x])
	{
		ii++;
		flag[x] = false;
		for (i = 0; i < N; i++) {
			X[i] = x % 10;
			x /= 10;
		}
		for (i = 0; i < N; i++)A[i] = X[i];
		for (i = 0; i < N - 1; i++)
			for (j = 0; j < N - 1; j++)
				if (A[j] > A[j + 1])
				{
					tmp = A[j];
					A[j] = A[j + 1];
					A[j + 1] = tmp;
				}
		for (i = 0; i < N; i++)B[i] = X[i];
		for (i = 0; i < N - 1; i++)
			for (j = 0; j < N - 1; j++)
				if (B[j] < B[j + 1])
				{
					tmp = B[j];
					B[j] = B[j + 1];
					B[j + 1] = tmp;
				}
		for (i = 0,mul=1,y=0; i < N; i++,mul *= 10)
		{
			y = y + A[i] * mul;
		}
		a = y;

		for (i = 0,mul = 1, y = 0; i < N; i++)
		{
			y = y + B[i] * mul;
			mul *= 10;
		}
		b = y;
		x = a - b;
	}
	printf("%d %d", x, ii);
	return 0;
}
