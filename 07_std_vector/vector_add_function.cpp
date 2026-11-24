#include<iostream>
#include<vector>
using namespace std;
void Adiciona(vector<int> &v);
int main(){
    vector<int> myV;
    Adiciona(myV);
}
void Adiciona(vector<int> &v){
    cout << "introduza 5 valores" << endl;
    for(size_t i=0;i<5;i++){
        int valor;
        cin >> valor;
        v.push_back(valor);
    }
    for(auto El : v){
        cout << El << endl;
    }
}