#include <stdio.h>
int main(void){FILE*file;if((file=fopen("./Grace_kid.c","w+"))==NULL){return (0);};fprintf(file,"CECI EST UN TEST\n");fclose(file);return(0);}
