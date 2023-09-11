/*
 Faça um programa em C que calcule as raizes de uma equaçao do segundo grau atraves da formula de bhaskara (-b+/- raiz_quadrada(b² - 4ac)/2a).
*/




int main (){
//.ax² + bx + c
int coeficiente_a = 2;
int coeficiente_b = 1;
int coeficiente_c = -3;

  //b² - 4ac
  double delta  = pow (coeficiente_b,2)-4 * coeficiente_a * coenficiente_c;
  
 
  
  // x1 = -b + raiz (delta) / 2a
  double raiz_x2 = (-coeficiente _b - sqrt (delta)) / 2 * coeficiente_a;

  // x2 = -b - raiz (delta) / 2a
  double raiz_x2 = (-coeficiente_b - sqrt (delta)) / 2 * coeficiente_a;
  
  print("as raizes da equacao %dx² %dx %d são x1 = %f e x2 = %f\n", 
    coeficiente_a coeficiente_b, coeficiente_c, raiz_x1, raiz_x2);



return 0;
}