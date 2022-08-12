#include <iostream>
//Faça um programa que solicita ao usuário um valor inteiro e exibe uma mensagem informando se o número é par ou ímpar. Saídas:
//se o número é par ou ímpar. Saídas:
// Pedido ao usuário = "Entre com um numero inteiro:";
// Caso verdadeiro = “O número é par”;
// Caso falso = “O número é ímpar”
int main() {

  int num;

  std::cout<<"Digite o valor para saber se eh Impar ou Par: ";
  std::cin>>num;

  if (num%2==0) {
    std::cout<<"eh Par";
    }
   else {
  std::cout<<"eh Impar";
}
  
}
