#include <iostream>

int A,B;

int main() 
{
	printf("DIGITE UM NUMERO INTEIRO A: ");
	scanf("%i", &A);
	printf("DIGITE UM NUMERO INTEIRO B: ");
	scanf("%i", &B);
	
	if(A>B)
	{
		printf("A eh maior que B");
	}
		else 
		{
			if(B>A)
			{
				printf("B eh maior que A");
			}
		}
	
	if(A==B)
	{
		printf("A eh igual a B");
	}
	
	return 0;
}
