#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV;
    int dim = myV.size();
    int soma = 0;
    float media;
    cout << "introduza 5 valores no contentor" << endl;
    for(size_t i=0;i<5;i++){
        int valor;
        cin >> valor;
        myV.push_back(valor);  
    }
    for(auto El : myV){
        cout << El << "\t";
    }
    cout << endl;
    
    for(size_t i=0;i<5;i++){
        soma += myV[i];
    }

    media = soma/5;

    cout << "Media:\t" << media << endl;
    cout << "Soma:\t" << soma << endl;
}