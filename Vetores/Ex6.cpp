#include <iostream>
using namespace std;
#define TAM 3
//Declare um vetor de 10 inteiros, leia um valor para cada posição e no final mostre o calculo do fatorial do maior e do menor.
int main() {

  int vet[TAM],fatM=1,fatN=1,maior,menor,i;

  
  for(i=0;i<TAM;i++){
    cout<<"Digite 10 valores: ";
    cin>>vet[i];
  }
  cout<<endl;
   for(i=0;i<TAM;i++){
     cout<<vet[i]<<"\t";
   }
  maior=vet[0];
  menor=vet[0];
   for(i=1;i<TAM;i++){
     if (vet[i]>maior){
       maior=vet[i];
     }
   }
  for(i=1;i<TAM;i++){
    if(vet[i]<menor){
      menor=vet[i];
    }
  }
  cout<<endl;
  cout<<endl;
  cout<<"Valor Maior: "<<maior<<"\t";
  cout<<"Valor Menor: "<<menor;
  cout<<endl;
  for( i=1;i<=maior;i++){
    fatM= fatM*i;
    
  }
   for( i=1;i<=menor;i++){
     fatN= fatN*i;}
  cout<<"Fatorial Do Maior: "<<fatM<<endl;
  cout<<"Fatorial Do Menor: "<<fatN;
  }
