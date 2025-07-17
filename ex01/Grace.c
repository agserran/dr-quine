#include <stdio.h>
#define TEXT "#include <stdio.h>%c#define TEXT %c%s%c%c#define CODE __attribute__((constructor)) void run() {FILE *f = fopen(%cGrace_kid.c%c, %cw%c); fprintf(f, TEXT,10,34,TEXT,34,10,34,34,34,34,10,10,10,10); fclose(f);}%c#define EXECUTE CODE%c// help pls%cEXECUTE%c"
#define CODE __attribute__((constructor)) void run() {FILE *f = fopen("Grace_kid.c", "w"); fprintf(f, TEXT,10,34,TEXT,34,10,34,34,34,34,10,10,10,10); fclose(f);}
#define EXECUTE CODE
// help pls
EXECUTE
