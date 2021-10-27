#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char user_input[];
int key = 1;

int main(void)
{
	printf("bem-vindo ao Bot teste\n");
	printf("vim ajudar a procurar locais no site\n");

	while (strcmp(user_input, "sair") != 0) {
		printf("\nComandos disponiveis:\n");
		printf("assuntos\n");
		printf("feedback\n");
		printf("redes sociais\n");
		printf("sair\n");

		gets(user_input);

		if (strcmp(user_input, "assuntos") == 0) {
			while (key != 0) {
				printf("\nEscolha um dos assuntos:\n");
				printf("musicas\n");
				printf("esportes\n");

				gets(user_input);
				if (strcmp(user_input, "musicas") == 0){
					system("start https://tvpe.tv/?s=musicas&post_type=post");
					break;
				}
				else if (strcmp(user_input, "esportes") == 0){
					system("start https://tvpe.tv/?s=esportes&post_type=post");
					break;
				}else{
					printf("não entendi, poderia repetir o comando?");
				}
			}
		}
		else if (strcmp(user_input, "feedback") == 0) {
			printf("Nos informe seu feedback!\n");
			gets(user_input);
		}
		else if (strcmp(user_input, "redes sociais") == 0) {
			printf("\nFacebook - https://www.facebook.com/tvpernambuco\n");
			printf("Twitter - https://twitter.com/tvpe\n");
			printf("Youtube - https://www.youtube.com/tvpernambuco\n");
			printf("Instagram - https://www.instagram.com/tvpernambuco/\n");
		}else{
			printf("\nnao entendi, poderia repetir o comando?\n");
		}
	}
	printf("ate logo\n");
}
