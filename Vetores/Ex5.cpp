#include <iostream>
using namespace std;
#define TAM 3
//Leia dois vetores A e B com vinte elementos. Construa um terceiro vetor C, onde cada elemento é a subtração do elemento correspondente de a A com B.
int main() {
  int vetA[TAM],vetB[TAM],vetC[TAM],i;
  cout<<"Digite No Vetor A.";
  cout<<endl;
  for (i=0;i<TAM;i++){
    cout<<"Digite 20 valores: ";
    cin>>vetA[i];
  }
  cout<<endl;
  cout<<"Digite No Vetor B.";
  cout<<endl;
  for (i=0;i<TAM;i++){
    cout<<"Digite 20 valores: ";
    cin>>vetB[i];
  }

  for (i=0;i<TAM;i++){
    vetC[i]=vetA[i]-vetB[i];
  }
cout<<"Vetor A:";
  for (i=0;i<TAM;i++){
    cout<<vetA[i]<<"\t";
    
  }
  cout<<endl;
  cout<<endl;
  cout<<"Vetor B:";
  for (i=0;i<TAM;i++){
    cout<<vetB[i]<<"\t";
  }
  cout<<endl;
  cout<<endl;
  cout<<"Vetor c:";
  for (i=0;i<TAM;i++){
    cout<<vetC[i]<<"\t";
}
  }
