#include <iostream>

int main() {
 int horas,min;

  std::cout<<"Digite as Horas e minutos em sequencia -> "<<std::endl;
  std::cin>>horas>>min;

  if((horas<24) && (min<60)){
   std::cout<<"As horas sao validas!";  
  }
  else
  std::cout<<"As horas sao invalidas!";
}
