//Programa que permite que o usuário digite até clicar na letra "x" que então irá retornar o total de caracteres digitados 

#include <stdio.h>
#include <conio.h>
int main () {
char let='b';int t=0;
printf("Digite sem pressionar enter, quando acabar, pressione 'x':");
while (let!='x')
{
let=getche();
t++;
}
printf ("\nTotal= %d letras", t);
}
