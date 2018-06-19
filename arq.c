#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

// funcao para comparar duas strings
int compare (const void * a, const void * b ) {
  const char *pa = *(const char**)a;
  const char *pb = *(const char**)b;

  return strcmp(pa,pb);
}
int main()
{
  FILE *arq1, *arq2, *arq3;
  char Linha[100];
  int numero_de_linhas = 0;
  char* linhas_geral[20];

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


  while (1) {
    int r = fscanf(arq1,"%s", Linha) ;
    if( r == EOF) break;
    if(Linha[0] == '0'){
      linhas_geral[numero_de_linhas]=malloc(100*sizeof(char));
      strcpy(linhas_geral[numero_de_linhas],Linha);
      numero_de_linhas++;
    }
  }
  while (1) {
    int r = fscanf(arq2,"%s", Linha) ;
    if(r == EOF) break;
    if(Linha[0] == '0'){
      linhas_geral[numero_de_linhas]=malloc(100*sizeof(char));
      strcpy(linhas_geral[numero_de_linhas],Linha);
      numero_de_linhas++;
    }
  }
  // Ordenar a array contendo os nomes e matriculas
  qsort(linhas_geral, numero_de_linhas, sizeof(char *), compare);

  // Escrever no arquivo3, geral.txt
  fputs("Nome:Renato Machado Neves \nMatricula:0050012586 \n \n", arq3);
  fputs("coloc nome\n===========\n",arq3);
  for(int i = 0 ; i < numero_de_linhas; i++){
    fprintf(arq3,"%s\n",linhas_geral[i]);
  }

  fclose(arq1);
  fclose(arq2);
  fclose(arq3);

  printf("Procedimento realizado com sucesso! \n ");

  return 0;
}
