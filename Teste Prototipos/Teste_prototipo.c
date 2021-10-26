#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char user_input[];

int main(void)
{
	printf("bem-vindo ao Bot teste\n");
	printf("vim ajudar a procurar locais no site\n");

	while (strcmp(user_input, "exit") != 0) {
		printf("Comando:\n");
		gets(user_input);

		if (strcmp(user_input, "abrir area comercial") == 0) {
			system("start https://tvpe.tv/area-comercial/");
		}
	}
	printf("bye bye\n");
}