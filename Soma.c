#include<stdio.h>

int soma(int a, int b)

{ int result;
	
	result=(a+b);
	
	return result;
}


int main()
{ int a, b, resp;
	
	printf ("Entre com 2 numeros:");
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	resp=soma(a,b);
	
	printf ("Soma:%d", resp);
	
	return 0;
}
