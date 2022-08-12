#include <iostream>
// Faça um programa que solicita a data de nascimento de uma pessoa e a data atual e exiba a idade desta pessoa em anos (A data deve ser armazenada em 3 variáveis inteiras para ano, mês e dia)

int main() {

  int dia1,mes1,ano1,dia2,mes2,ano2,idade;

  std::cout<<"Digite a data de nascimento na seguinte sequencia [Dia/mes/ano] "<<std::endl;
  std::cin>>dia1>>mes1>>ano1;

  std::cout<<"Digite a data atual na seguinte sequencia [Dia/mes/ano] "<<std::endl;
  std::cin>>dia2>>mes2>>ano2;

  if((dia1==dia2) && (mes1==mes2)){
    idade = ano2-ano1;
    std::cout<<"Voce tem "<<idade;
    
  } 
  
  
  
}
