#include <stdio.h>
#define TEXT "#include <stdio.h>%c#define TEXT %c%s%c%c#define CODE int main() {FILE *f = fopen(%cGrace_kid.c%c, %cw%c); fprintf(f, TEXT,10,34,TEXT,34,10,34,34,34,34,10,10,10,10,10,10); fclose(f); return (0);}%c#define EXECUTE CODE%c/*%c	help pls%c*/%cEXECUTE%c"
#define CODE int main() {FILE *f = fopen("Grace_kid.c", "w"); fprintf(f, TEXT,10,34,TEXT,34,10,34,34,34,34,10,10,10,10,10,10); fclose(f); return (0);}
#define EXECUTE CODE
/*
	help pls
*/
EXECUTE
