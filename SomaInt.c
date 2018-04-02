#include<stdio.h>

int somanum (int a, int b)

{
	int total=0;
	
		if (a>=b)
		{
		return 0;
		}
	
		else
	
		{
		for (int i=a+1; i<b; i++)
		
		total+=i;
		
		return total;
		}	

}

int main()

{
	int a, b, resp;

		printf("Informe dois numeros:\n");
		scanf("%d %d", &a, &b);

		resp=somanum(a, b);

		printf("\nTotal:%d", resp);
	
	return 0;	
}
