#include <iostream>

int main() {

   float oper1,oper2,resultado;
  int oper,cont=1;

  std::cout<<"--------------------------------------------------------"<<std::endl;
  std::cout<<"---------------------Calculadora------------------------"<<std::endl;
  
  
  std::cout<<"--------------------------------------------------------"<<std::endl;
  std::cout<<"  Escolhas 1-soma, 2-produto, 3-divisao, 4-potencia "<<std::endl;
  std::cout<<"--------------------------------------------------------"<<std::endl;

  std::cout<<"Escolha operacao -> ";
  std::cin>>oper;
  
  do {
    if((oper<=0)||(oper>4)){
      std::cout<<"Operacao invalidade tente de novo:";
      std::cin>>oper;
    } 
        
    } while ((oper<0)||(oper>4));

   std::cout<<"Digite dois operandos:"<<std::endl;
   std::cin>>oper1>>oper2;

  switch(oper){
    case 1: 
    resultado=oper1+oper2;
    std::cout<<resultado;
    break;

    case 2:
    resultado=oper1*oper2;
    std::cout<<resultado;
    break;

    case 3:
    resultado=oper1/oper2;
    std::cout<<resultado;
    break;

    case 4:
    
      
  }
    
  
  
  
  
  
  
  
  }
