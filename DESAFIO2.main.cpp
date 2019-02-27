#include <stdio.h>

float a,b,m,d,s,sub;
int e;

int main(int argc, char** argv) 
{
   printf("digite o valor de a: ");
   scanf("%f",&a);
   printf("\n");		
   printf("digite o valor de b: ");
   scanf("%f",&b);
   printf("\n");
   
   printf("Qual operacao deseja fazer: ");
   printf("\n");
   printf("1-Multiplicacao");
   printf("\n");
   printf("2-Divisao");
   printf("\n");
   printf("3-Soma");
   printf("\n");
   printf("4-Subtracao");
   printf("\n");
   printf("\n");
   
   printf("Opcao selecionada: ");
   scanf("%d", &e);
   printf("\n");
   
   switch(e)
   {
   
   
   case 1:
   	
   		m=a*b;
   		printf("Multiplicacao= ");
   		printf("%f", m);
   		break;
	
	
	case 2:
   		d=a/b;
   		printf("Divisao= ");
   		printf("%f", d);
   		break;
   
    case 3:
   		s=a+b;
   		printf("Soma= ");
   		printf("%f", s);
   		break;
   
    case 4:
   		sub=a-b;
   		printf("Subtracao= ");
   		printf("%f", sub);
   		break;
   
  	}
	
	return 0;
}
