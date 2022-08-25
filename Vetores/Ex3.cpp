#include <iostream>
using namespace std;
#define TAM 5
//- Declare um vetor de 5 inteiros, leia um valor para cada posição e no final mostre quantos elementos possuem valor maior, menor e igual ao primeiro elemento do vetor.

int main() {
  int vet[TAM],maior=0,menor=0,igual=0,i;

  for(i=0;i<TAM;i++){
    cout<<"Digite 5 valores: ";
    cin>>vet[i];
  }

  for(i=1;i<TAM;i++){
    if (vet[i]>vet[0]){
        maior++;
    }else 
      if (vet[i]<vet[0]){
        menor++;
    }else 
        if (vet[i]==vet[0]){
      igual++;
    }
    
      
  }

  cout<<"Maior: "<<maior<<endl;
  cout<<"Menor: "<<menor<<endl;
  cout<<"Igual: "<<igual;
  
}
