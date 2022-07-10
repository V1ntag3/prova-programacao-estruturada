#include <stdio.h>

int main()
{
	int d, m, a, codigo, dv, mv, av;
	float prod_ok, prod_n, porcent;
	prod_ok = 0;
	prod_n = 0;
	while(codigo >= 0)
	{
		printf("Digite a data da visita:\n");
		scanf("%d %d %d", &d, &m, &a);
		printf("Digite o codigo:\n");
		scanf("%d", &codigo);
		if(codigo >= 0)
		{
			printf("Digite a data de validade do produto:\n");
			scanf("%d %d %d", &dv, &mv, &av);
			if(av < a)
			{
				printf("Fora da validade\n");
				prod_n = prod_n + 1;
			}
			else if(av > a)
			{
				printf("Validade OK\n");
				prod_ok = prod_ok + 1;
			}
			else
			{
				if(mv < m)
				{
					printf("Fora da validade\n");
					prod_n = prod_n + 1;
				}
				else if(mv > m)
				{
					printf("Validade OK\n");
					prod_ok = prod_ok + 1;
				}
				else
				{
					if(dv < d)
					{
						printf("Fora da validade\n");
						prod_n = prod_n + 1;
					}
					else if(dv >= d)
					{
						printf("Validade OK\n");
						prod_ok = prod_ok + 1;
					}
				}
			}
		}
	}
	porcent = (prod_n / (prod_ok + prod_n)) * 100;
	if(prod_n == 0)
	{
		printf("SEM MULTA");
	}
	else if(porcent <= 10)
	{
		printf("R$ 1000");
	}
	else if(porcent > 10 && porcent < 30)
	{
		printf("R$ 10000");
	}
	else if(porcent > 30)
	{
		printf("R$ 100000");
	}
	return 0;
}

