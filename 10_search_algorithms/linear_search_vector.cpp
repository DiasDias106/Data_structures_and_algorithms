/*5. Pesquisa de um Elemento:
Escreva um programa em C++ que crie um vetor de 7 elementos inteiros predefinidos.
Peça ao utilizador um número inteiro para pesquisar no vetor.
Se o número estiver presente no vetor, mostre a respetiva posição. Caso contrário, escreva que
não foi encontrado.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV1 = {10,20,30,40,50,60,70};
    int pesc;
    cout << "introduza um numero para ser pesquisado" << endl;
    cin >> pesc;
    bool encontrado = false;
    for(size_t i=0;i<myV1.size();i++){
        if(myV1[i] == pesc){
            encontrado == true;
            cout << "o valor doi encontrado na posição" << i << endl;
        }
    }
    if(!encontrado){
        cout << "o valor nao foi encontrado" << endl;
    }
}