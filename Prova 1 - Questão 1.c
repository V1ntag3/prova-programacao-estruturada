#include <stdio.h>
int main()
{
	int k, s;
	k = 4;
	s = 0;
	while(k < 1001)
	{
		s = s + k;
		k = k + 4;
	}
	printf("Soma = %d", s);
	return 0;
}
