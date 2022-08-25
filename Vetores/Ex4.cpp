#include <iostream>
#define TAM 4
using namespace std;
//- Declare um vetor de 10 inteiros, leia um valor para cada posição e no final mostre os elementos deste vetor em posição inversa ao que foram atribuídos.
int main() {
  int vet[TAM],i;

  for(i=0;i<TAM;i++){
    cout<<"Digite 10 valores: ";
    cin>>vet[i];
  }
  for(i=TAM-1;i>=0;i--){
     
      cout<<vet[i]<<"\t";
    }
}
