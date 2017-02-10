#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main(int argc, char **argv){
int i = 5;
argc++;
if(strchr(argv[0],'_')!=0){i--;}
FILE*file;
char file_name[10];
char exec_name[10];
sprintf(file_name,"Sully_%d.c",i);
sprintf(exec_name,"./Sully_%d",i);
char*gccargv[]={"/usr/bin/gcc",file_name,"-o",exec_name,"-Wall","-Werror","-Wextra",NULL};
char*exec_argv[]={exec_name,NULL};
if((file=fopen(file_name,"w+"))==NULL){return(0);};
char*a="#include<stdio.h>%c#include<unistd.h>%c#include<string.h>%cint main(int argc, char **argv){%cint i = %d;%cargc++;%cif(strchr(argv[0],%c_%c)!=0){i--;}%cFILE*file;%cchar file_name[10];%cchar exec_name[10];%csprintf(file_name,%cSully_%%d.c%c,i);%csprintf(exec_name,%c./Sully_%%d%c,i);%cchar*gccargv[]={%c/usr/bin/gcc%c,file_name,%c-o%c,exec_name,%c-Wall%c,%c-Werror%c,%c-Wextra%c,NULL};%cchar*exec_argv[]={exec_name,NULL};%cif((file=fopen(file_name,%cw+%c))==NULL){return(0);};%cchar*a=%c%s%c;%cfprintf(file,a,10,10,10,10,i,10,10,39,39,10,10,10,10,34,34,10,34,34,10,34,34,34,34,34,34,34,34,34,34,10,10,34,34,10,34,a,34,10,10,10,10,10,10,10);%cfclose(file);%cexecve(gccargv[0],gccargv,NULL);%cif(i == 0){return(0);}%cexecve(exec_argv[0],exec_argv,NULL);%creturn(0);}%c";
fprintf(file,a,10,10,10,10,i,10,10,39,39,10,10,10,10,34,34,10,34,34,10,34,34,34,34,34,34,34,34,34,34,10,10,34,34,10,34,a,34,10,10,10,10,10,10,10);
fclose(file);
execve(gccargv[0],gccargv,NULL);
if(i == 0){return(0);}
execve(exec_argv[0],exec_argv,NULL);
return(0);}
