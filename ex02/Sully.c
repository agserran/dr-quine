#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>

char	*s = "#include	<stdio.h>%c#include	<string.h>%c#include	<stdlib.h>%c%cchar	*s = %c%s%c;%c%cint	main()%c{%c	int	n = %d;%c	if (n - 1 >= 0)%c	{%c		char	*name = malloc(10);%c		sprintf(name, %cSully%cd.c%c, n - 1);%c		FILE *f = fopen(name, %cw%c);%c		fprintf(f, s, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, n - 1, 10, 10, 10, 10, 34, 37, 34, 10, 34, 34, 10, 10, 10, 10, 34, 37, 37, 37, 34, 10, 10, 10, 10, 10, 10);%c		fclose(f);%c		char	cmd[56];%c		sprintf(cmd, %cgcc -Wall -Werror -Wextra %cs -o Sully%cd && ./Sully%cd%c, name, n-1, n-1);%c		system(cmd);%c		free(name);%c	}%c	return	0;%c}";

int	main()
{
	int	n = 5;
	if (n - 1 >= 0)
	{
		char	*name = malloc(10);
		sprintf(name, "Sully%d.c", n - 1);
		FILE *f = fopen(name, "w");
		fprintf(f, s, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, n - 1, 10, 10, 10, 10, 34, 37, 34, 10, 34, 34, 10, 10, 10, 10, 34, 37, 37, 37, 34, 10, 10, 10, 10, 10, 10);
		fclose(f);
		char	cmd[56];
		sprintf(cmd, "gcc -Wall -Werror -Wextra %s -o Sully%d && ./Sully%d", name, n-1, n-1);
		system(cmd);
		free(name);
	}
	return	0;
}