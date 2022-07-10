#include <stdio.h>

int main()
{
	double maior_sal, salario, media_sal, sal_maior20, media_idade, z, x, idade, soma, soma_idade;
	z = 0;
	soma_idade = 0;
	maior_sal = 0;
	sal_maior20 = 0;
	for(x = 1; x < 1001; x++)
	{
		printf("Informe seu salario:\n");
		scanf("%lf", &salario);
		while(salario < 0)
		{
			printf("Salario invalido digite novamente:\n");
			scanf("%lf", &salario);
		}
		printf("Informe sua idade:\n");
		scanf("%lf", &idade);
		soma = soma + salario;
		media_sal = soma / x;
		if(salario > maior_sal)
		{
			maior_sal = salario;
		}
		if(idade < 20)
		{
			if(salario > 2000)
			{
				sal_maior20 = sal_maior20 + 1;
			}
		}
		if(salario > 20000)
		{
			z = z + 1;
			soma_idade = soma_idade + idade;
			media_idade = soma_idade / z;

		}

	}


	printf("Media do salario do grupo: %.2lf\n", media_sal);
	printf("Maior salario do grupo: %.2lf\n", maior_sal);
	printf("Quantidade de pessoas com menos de 20 anos que recebem mais de 2000: %.0lf\n", sal_maior20);
	printf("Media de idade de pessoas que recebem mais de 20000:%.2lf\n", media_idade);

	return 0;
}
