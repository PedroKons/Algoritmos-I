#include <iostream>

int main() {

  float nota1,nota2,nota3,media,nome;



  std::cout<<"Digite nota 1 -> "<<std::endl;
  std::cin>>nota1;

  std::cout<<"Digite nota 2 -> "<<std::endl;
  std::cin>>nota2;

  std::cout<<"Digite nota 3 -> "<<std::endl;
  std::cin>>nota3;

  media=(nota1+nota2+nota3)/3;

  if (media>=6){
    std::cout<<"Parabens voce foi Aprovado";
  }else{
    std::cout<<"Voce foi Reprovado";
  }
}
