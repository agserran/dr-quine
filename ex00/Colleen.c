#include <stdio.h>

void	useless()
{
	int	i = 0;
	(void)i;
}

char	*f="#include <stdio.h>%c%cvoid	useless()%c{%c	int	i = 0;%c	(void)i;%c}%c%cchar	*f=%c%s%c;%c%c//My name is Jeff%c%cint main()%c{%c	useless();%c	//helloo%c	printf(f,10,10,10,10,10,10,10,10,34,f,34,10,10,10,10,10,10,10,10,10,10,10);%c	return 0;%c}%c";

//My name is Jeff

int main()
{
	useless();
	//helloo
	printf(f,10,10,10,10,10,10,10,10,34,f,34,10,10,10,10,10,10,10,10,10,10,10);
	return 0;
}
