#include <stdio.h>

int main(){

  // + -  x / => + - * /

  int soma = 10 + 2;
  int diferenca = soma - 2;
  int multiplicacao = 10 * soma;
  int divisao =(int) soma / 2.0f;
  int resto = soma % 2;

  printf ("soma = %i\n" ,soma);
  printf("soma = %i\n" ,soma++); // soma= soma + 1;
  printf("soma =%i\n" , soma);
  printf("soma =%i\n" , ++soma); // soma = soma + 1;

  soma --; // soma = soma -1;
  --soma;


  
}