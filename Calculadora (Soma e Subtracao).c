#include<stdio.h>

int menu ()
{   
    int opcao;

		printf("Calculadora \n \n");
	
		printf("1 - Somar \n");
		printf("2 - Subtrair \n");
		printf("0 - Sair \n \n");
	
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
				printf("\nValor Invalido! \n");
				printf("\nREINICIANDO O APLICATIVO!!! \n \n");
				printf("********************  \n \n");
				menu();	
	}
	
}

float soma()

{
	float a,b, result;
	
		printf("\nOperacao Soma\n\n");
	
		printf("\nEntre com o valor 1:");
			scanf("%f", &a);
		
		printf("\nEntre com o valor 2:");
			scanf("%f", &b);
	
		result=(a+b);
	
	return result;	
}

float subtracao()

{
	float a,b, result;
	
		printf("\nOperacao Subtracao\n\n");
	
		printf("\nEntre com o valor 1:");
			scanf("%f", &a);
		
		printf("\nEntre com o valor 2:");
			scanf("%f", &b);
	
		result=(a-b);
	
	return result;	
}


int main ()
{ 	
	int m;
	float r;

 		m=menu();
 		
 	switch (m)
	{
		case 0:
				return 0;
				
		case 1:
				r=soma();
				printf("\nO resultado e:%f\n", r);
				break;
		
		case 2:
				r=subtracao();
				printf("\nO resultado e:%f\n", r);
				break;
				
		default:
				printf("\nA opcao escolhida foi:%d\n", m);
 	}
    
  return 0;
}
