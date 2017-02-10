#include<stdio.h>
/*
   Toto
*/
#define A "#include<stdio.h>%c/*%c   Toto%c*/%c#define A %c%s%c%c#define B %c%s%c%c#define FT()int main(void){FILE*file;char*a=A;char*b=B;if((file=fopen(%c./Grace_kid.c%c,%cw+%c))==NULL){return(0);};fprintf(file,a,10,10,10,10,34,a,34,10,34,b,34,10,34,34,34,34,10,10);fclose(file);return(0);}%cFT();%c"
#define B "tata"
#define FT()int main(void){FILE*file;char*a=A;char*b=B;if((file=fopen("./Grace_kid.c","w+"))==NULL){return(0);};fprintf(file,a,10,10,10,10,34,a,34,10,34,b,34,10,34,34,34,34,10,10);fclose(file);return(0);}
FT();
