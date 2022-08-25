#include <iostream>
using namespace std;
#define TAM 10
//Calcule a média das notas de 10 alunos de uma disciplina e determine o número de alunos que tiveram nota superior a média calculada.
int main() {
  int vet[TAM],alunos=0,i;
  float med=0,soma=0;

  for(i=0;i<TAM;i++){
    cout<<"Digite as notas: ";
    cin>>vet[i];
  }

  for(i=0;i<TAM;i++){
    soma+=vet[i];
    }
   med=soma/10;

  for(i=0;i<TAM;i++){
    if(vet[i]>med){
      alunos++;
    }
  }
    
  
  cout<<"media:"<<med<<endl;
  cout<<alunos<<" Alunos tiveram nota maior que a media.";
  
}
