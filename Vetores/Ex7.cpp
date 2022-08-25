#include <iostream>
using namespace std;
#define TAM 5
//Construa um algoritmo que solicite 5 valores inteiros ao usuário e os armazene em um vetor. Após, deverá ser invertido os valores do vetor utilizando um segundo vetor.
int main() {
  int vet1[TAM],vet2[TAM],i,var;

  for(i=0;i<TAM;i++){
    cout<<"Digitar 5 valores: ";
    cin>>vet1[i];
  }
  cout<<endl;
  for(i=0;i<TAM;i++){
    cout<<vet1[i]<<"\t";
    vet1[i]=vet2[i];
  }
  for(i=0;i<TAM;i++){
    var=TAM-1-i;
    vet1[i]=vet2[var];
  }
  for(i=0;i<TAM;i++){
    cout<<"Vetor Invertido: "<<vet1[i]<<"\t";
    
  }
  
}
