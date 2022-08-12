#include <iostream>

int main() {
  float num1,num2;

  std::cout<<"Digite dois valores reais->"<<std::endl;
  std::cin>> num1>>num2;

  if (num1==num2) {
    std::cout<<"Esses numeros sao iguais!";
  } else
    
if(num1>num2){
  std::cout<<"O numero 1 eh maior";
}else{
  std::cout<<"O numero 2 eh maior";
}
}
