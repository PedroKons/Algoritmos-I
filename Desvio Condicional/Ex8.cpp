#include <iostream>

int main() {
 float num1,num2,num3;
  std::cout<<"Digite tres valores reais-> "<<std::endl;
  std::cin>>num1>>num2>>num3;

  if ((num1<num2)&&(num1<num3)){
    std::cout<<"Primeiro numero digitado eh menor."; 
  } else {
    if ((num2<num1)&&(num2<num3)){
    std::cout<<"Segundo numero digitado eh menor.";
      } else   {
    std::cout<<"Terceiro numero digitado eh menor.";
  }
    }
}
