#include<stdio.h>

int menu ()
{   
    int opcao;

		printf("Calculadora\n\n");
	
		printf("1 - Somar\n");
		printf("2 - Subtrair\n");
		printf("0 - Sair\n\n");
	
		printf("Escolha uma opcao:");
			scanf("%d", &opcao);
	
	switch (opcao)
	{
		case 0: 
				return 0;
				
				break;
	
	    case 1: 
				return opcao;
				
				break;
				
		case 2: 
				return opcao;
				
				break;
				
		default: 
				printf("\nValor Invalido!\n");
				
				printf("\nREINICIANDO O APLICATIVO!!!\n\n");
				
				printf("********************\n\n");
				
				menu();	
	}
	
}

float soma(float a, float b)
{
	float result;
	
		result=(a+b);
	
	return result;	
}

float subtracao (float c, float d)
{
	float result;
	
		result=(c-d);
	
	return result;	
}

int main ()
{ 	
	int m;
	
	float a, b, c, d, r;

 	m=menu();
 		
 	switch (m)
	{
		case 0:
				return 0;
				
		case 1: 
				printf("\nOperacao Soma\n\n");
				
				printf("\nEntre com o valor 1:");
			    	scanf("%f", &a);
			    
				printf("\nEntre com o valor 2:");
			    	scanf("%f", &b);
				
				r=soma(a,b);
				
				printf("\nO resultado e:%f\n", r);
				
				break;
		
		case 2:	
		                printf("\nOperacao Subtracao\n\n");
				
				printf("\nEntre com o valor 1:");
			    	scanf("%f", &c);
			    
				printf("\nEntre com o valor 2:");
			    	scanf("%f", &d);
				
				r=subtracao(c,d);
				
				printf("\nO resultado e:%f\n", r);
				
				break;
				
		default:
				printf("\nA opcao escolhida foi:%d\n", m);
 	}
    
  	return 0;
}
