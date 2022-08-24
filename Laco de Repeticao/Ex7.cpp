//7.	Fa�a um programa que solicita ao usu�rio uma quantidade indeterminada de n�meros inteiros. O programa deve calcular e escrever a m�dia aritm�tica apenas dos n�meros pares. A entrada de dados deve ser encerrada quando o n�mero 0 (ZERO) for digitado.

#include <iostream>
using namespace std;

int main() {
    int numero, qtd=0, media=0;
    float res=0;

    do{
        cout << "Digite um valor: ";
        cin >> numero;

        if (numero % 2 == 0 && numero !=0){
            media += numero;
            qtd++;
        }
    }while (numero != 0);

    if (qtd != 0){
        res = media / qtd;
        cout << "M�dia: " << res << endl;
    }

    return 0;
}

