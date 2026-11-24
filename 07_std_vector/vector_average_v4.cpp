/*2. Média de Elementos:
Escreva um programa em C++ que preencha um vetor de números reais com 10 elementos
fornecidos pelo utilizador.
Calcule a média dos elementos do vetor.
Mostre o resultado.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV(10);
    float media =0;
    cout << "introduza 10 numeros"<< endl;
    for(size_t i=0;i<10;i++){
        int valor;
        cin >> valor;
        myV[i] = valor;
        media += valor;
    }
    cout << "separador"<< endl;
    for(auto El: myV){
        cout << El << endl;
    }
    cout << media/10 << endl;
}