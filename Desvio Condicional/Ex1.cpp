#include <iostream>
//Faça um programa que solicita ao usuário um número inteiro e exibe este na tela. Se o número for negativo, antes de ser exibido, ele deve ser transformado no equivalente positivo

int main() {
  
  int num;

  std::cout<<"digite um numero inteiro: ";
  std::cin>>num;

  if(num<0)
    num=num*(-1);

  std::cout<<"numero equivalente eh: "<<num;
  
  
}
