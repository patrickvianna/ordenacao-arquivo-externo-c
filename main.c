#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int LerLinhaArquivo() {
	char linha[100];
    char *retorno;
    FILE *fpp;

    fpp = fopen("test.txt", "rt");
	do {
		/*linha = getc(arquivo);
		printf("linha: %c", linha);
		if (linha != EOF || linha != '\n')
			retorno += linha;
			*/

			/*
			}
    while (fgets(str, MAXCHAR, fp) != NULL)
        printf("%s", str);
			*/
        //fscanf(fp, "%s", linha);
        //retorno = getc(linha, 100, fpp);
        retorno = fgets(linha, 100, fpp);
        if(retorno != NULL)
            printf("linha: %s \n", linha);
	} while (!feof(fpp));
return 0;
	/*if (retorno == NULL)
		return 0;
	else
		return atoi(linha);
		*/
}

void PreencherArquivoAleatorio()
{
    char buffer[20];
    FILE *fp;
    fp = fopen("test.txt", "w");

    for(int i = 0; i < 100; i++){
        itoa(i,buffer,10);
        strcat(buffer, "\n");
        fprintf(fp, buffer);
        //printf("%i", i);
    }
    fclose(fp);
}

int main() {

    //FILE *fp;

    //fp = fopen("test.txt", "a");
    //fprintf(fp, "This is testing for fprintf...\n");
    //fputs("This is testing for fputs...\n", fp);
    PreencherArquivoAleatorio();

    LerLinhaArquivo();

	//int chegou = 0;
	/*int contador = 0;
    char linha;
	FILE *arquivoOriginal;

	PreencherArquivoAleatorio();

	arquivoOriginal = fopen("Arquivo Primario.txt", "a");
	if (arquivoOriginal == NULL) // testa se o arquivo foi aberto com sucesso
	{
		printf("\n\nImpossivel abrir o arquivo!\n\n");
		return 0;
	}
    printf("Cheguei aqui");
    linha = getc(arquivoOriginal);
    printf("\nlinha: %c", linha);
	//contador = LerLinhaArquivo(arquivoOriginal);
	printf("PRONTO : %i", contador);
	// fechando arquivo
	fclose(arquivoOriginal);
	*/
	return 0;
}
