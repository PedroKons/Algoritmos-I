#include <iostream>

int main() {

  int num;

  do{
  std::cout<<"Digite um valor positivo: ";
  std::cin>>num;
   if (num>0) {
     std::cout<<"Esse numero eh valido.";
   } else if (num<0){
     std::cout<<"Esse numero eh invalido tente novamente.";
   } 
     
} while (num<0);
   
    

 
 
 
}
