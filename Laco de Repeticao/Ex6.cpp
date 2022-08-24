#include <iostream>

int main() {

  int base,exp,resul,cont=1;

 std::cout<<"Digite a potencia: "<<std::endl;
  std::cin>>base>>exp;

  resul=base;

  if(exp==0){
    resul=1;
  }else if ((base>=0)&&(exp>0)){
    while (cont<exp){
    resul=base*resul;
      cont++;
    ;
      }
    }else if ((base<0)||(exp<0)) {
    std::cout<<"valor invalido digite novamente: "<<std::endl;
  
    }
    std::cout<<resul;
    
  }
