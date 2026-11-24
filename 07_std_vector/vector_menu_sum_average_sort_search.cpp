#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> myV(5);
    int op;
    cout <<"introduza 5 numeros:" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV[i];
    }
    cout << "introduza o que quer fazer:" << endl;
    cin >> op;
    switch(op){
        case 1:
        soma(myV);
        break;
        case 2:
        media(myV);
        break;
        case 3:
        ordenar(myV);
        break;
        case 4:
        pesquis(myV);
        default:
        return 0;
        break;
    }
}

void soma(vector<int> &v){
    int soma = 0;
    for(size_t i=0;i<5;i++){
        soma += v[i];
    }
    cout <<"Soma:\t" << soma << endl;
}

void media(vector<int> &v){
    float media = 0;
    for(size_t i=0;i<5;i++){
        media += v[i];
    }
    cout << "Media:\t" << media/5 << endl;
}

void ordenar(vector<int> &v){
    for(auto El : v){
        cout << El << "\t";
    }
    cout << endl;
    sort(v.begin(),v.end());
    for(auto El : v){
      cout << El << "\t";
    }
    cout << endl;
}

void pesquis(vector<int> &v){
    int procura;
    cout << "introduza o numero que quer procurar" << endl;
    cin >> procura;
    auto it = find(v.begin(),v.end(),procura);
    if(it != v.end()){
        cout << "esta no indice:\t" << (size_t) distance(v.begin(),it);
    }
}