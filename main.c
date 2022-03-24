#include <stdio.h>

int main(void) {

  float salario, aumento, desconto;
  
  // entrada de dados
  printf("Digite o seu salário atual: ");
  scanf("%f",&salario);

  aumento = salario * 15/100;
  desconto = (aumento + salario) * 8/100;

  printf("Seu salário inicial era de %f\n", salario);
  printf("Salário com aumento %f\n", aumento+salario);
  printf("Salário com desconto %f\n", salario+aumento-desconto);
 
  
  
 

  


  }