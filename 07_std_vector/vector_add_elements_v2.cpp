/*1. Adição de Elementos:
Escreva um programa em C++ que comece com um vetor vazio.
Peça ao utilizador cinco números inteiros e armazene-os no vetor usando a biblioteca <vector>.
Mostre os números armazenados.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV;
    cout << "introduza 5 valores"<<endl;
    for(size_t i=0;i<5;i++){
        int valor;
        cin >> valor;
        myV.push_back(valor);
    }
    for(auto El: myV){
        cout << El << endl;
    }
}
