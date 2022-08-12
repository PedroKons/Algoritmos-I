#include <iostream>
// Faça um programa que solicita ao usuário uma letra e verifique se ela é uma vogal ou não exibindo uma mensagem correspondente. Saídas
// Pedido ao usuário= "Digite uma letra:";
// Caso verdadeiro = “É uma vogal”;
// Caso falso = “Não é uma vogal”
int main() {

  char letra;

  std::cout<<"Digite uma Letra -> ";
  std::cin>>letra;

  if ((letra='a') || (letra='e') || (letra='i') || (letra='o') || (letra='u')){
    std::cout<<"Essa letra eh uma VOGAL.";
   
  }
  else
  std::cout<<"Essa letra nao eh uma VOGAL.";
    }
