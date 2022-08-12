#include <iostream>

int main() {

  int l1,l2,l3;

  std::cout<<"Digite os valores correspondentes das laterais do triangulo: "<<std::endl;
  std::cin>>l1>>l2>>l3;

  if((l1==l2)&&(l2==l3)&&(l3==l1)){
    std::cout<<"Eh um Triangulo Equilatero.";
  }else{
    if ((l1!=l2)&&(l2!=l3)&&(l3!=l1)){
       std::cout<<"Eh um Triangulo Escaleno.";
    }else{
       std::cout<<"Eh um Triangulo Isosceles.";
    }
  }
}
