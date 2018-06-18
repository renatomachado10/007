#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE *arq1, *arq2, *arq3;
  char Linha[100];
  char *result1, *result2, *result3;
  int i=1;
 
 
  arq1 = fopen("niteroi.txt", "rt");
  if (arq1 == NULL)
  {
     printf("Problemas na abertura do arquivo\n");
     return 0;
  }
  
  arq2 = fopen("saopaulo.txt", "rt");
  if (arq2 == NULL)
  {
     printf("Problemas na abertura do arquivo\n");
     return 0;
  }
  
  arq3 = fopen("geral.txt", "wt");
  if (arq3 == NULL)
  {
     printf("Problemas na abertura do arquivo\n");
     return 0;
  }
   
   fputs("Nome:Renato Machado Neves \nMatricula:0050012586 \n \n", arq3);
   
  while (!feof(arq1))
  {
	
      result1 = fgets(Linha, 100, arq1);
      if (result1) 
	  fputs(result1, arq3);
      i++;
  }
  
  while (!feof(arq2))
  {
	
      result2 = fgets(Linha, 100, arq2);
      if (result2)
	  fputs(result2, arq3);
      i++;
  }

  fclose(arq1);
  fclose(arq2);
  fclose(arq3);
  
  printf("Procedimento realizado com sucesso! \n ");
  
  return 0;
}
