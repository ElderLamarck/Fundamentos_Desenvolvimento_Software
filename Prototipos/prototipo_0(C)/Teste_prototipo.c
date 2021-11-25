#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int clear(void)
{
	printf("\e[1;1H\e[2J");
}

FILE *file;
char user_input[];

int main(void)
{
	printf("\nOla, eu sou o Buco!\n");
	printf("Como posso te ajudar hoje?\n");

	while (strcmp(user_input, "0") != 0)
	{
		printf("\nComandos disponiveis:\n");
		printf("1 - Abrir area comercial\n");
		printf("2 - Notificar assuntos de interesse\n");
		printf("3 - Enviar feedback/sugestoes\n");
		printf("0 - sair\n");

		gets(user_input);

		if (strcmp(user_input, "1") == 0)
		{
			printf("pode deixar!\n");
			system("start https://tvpe.tv/area-comercial/");
			clear();
		}

		else if (strcmp(user_input, "2") == 0)
		{
			while (strcmp(user_input, "musicas") != 0 || strcmp(user_input, "esportes") != 0)
			{
				printf("\nEscolha um dos assuntos:\n");
				printf("musicas\n");
				printf("esportes\n");

				gets(user_input);
				if (strcmp(user_input, "musicas") == 0)
				{
					system("start https://tvpe.tv/somzeira/");
					clear();
					break;
				}
				else if (strcmp(user_input, "esportes") == 0)
				{
					system("start https://tvpe.tv/coluna-esporte/");
					clear();
					break;
				} else {
					printf("\nnao entendi, poderia repetir o comando?\n");
				}
			}
		}
		else if (strcmp(user_input, "3") == 0)
		{
			file = fopen("feedback/feedback_sugest.txt", "a");
			if (file == NULL)
			{
				printf("nao foi possivel abrir o arquivo\n");
			} else {
				printf("Nos informe seu feedback!\n");
				gets(user_input);
				fprintf(file, "%s\n", user_input);
				fclose(file);
				clear();
			}
		}
	}
	clear();
	printf("ate logo\n");
	return 0;
}
