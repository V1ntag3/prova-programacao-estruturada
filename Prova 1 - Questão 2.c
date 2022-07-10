#include <stdio.h>
#include <math.h>
int main()
{
	int n, pot, x, k, soma;
	printf("Valor de k?\n");
	scanf("%d", &k);
	printf("Valor de n?\n");
	scanf("%d", &n);
	soma = 0;
	x = 0;
	while(x < n)
	{
		pot = pow(k, x);
		soma = soma + pot;
		x = x + 1;
	}
	printf("Soma = %d\n", soma);
	return 0;
}





