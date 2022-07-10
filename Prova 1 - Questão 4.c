#include <stdio.h>

int main()
{
	int n;
	double p, soma, x;
	printf("Digite o N: \n");
	scanf("%d", &n);
	soma = 0;
	for(x = 1; x < n + 1; x++)
	{
		p = 1 / x;
		soma = soma + p;
	}
	printf("Somatorio = %lf", soma);

	return 0;
}
