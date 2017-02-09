#include<stdio.h>
void toto(void){
/*
   Toto
*/}
int main(void){
/*
   Tata
*/
char*a="#include<stdio.h>%cvoid toto(void){%c/*%c   Toto%c*/}%cint main(void){%c/*%c   Tata%c*/%cchar*a=%c%s%c;printf(a,10,10,10,10,10,10,10,10,10,34,a,34,10);}%c";printf(a,10,10,10,10,10,10,10,10,10,34,a,34,10);}
