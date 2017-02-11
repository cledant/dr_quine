#include<stdio.h>
/*
   Toto
*/
void toto(void){}
int main(void){
/*
   Tata
*/
char*a="#include<stdio.h>%c/*%c   Toto%c*/%cvoid toto(void){}%cint main(void){%c/*%c   Tata%c*/%cchar*a=%c%s%c;printf(a,10,10,10,10,10,10,10,10,10,34,a,34,10);}%c";printf(a,10,10,10,10,10,10,10,10,10,34,a,34,10);}
