#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> myV(5);
    int procura;
    cout << "introduza 5 valores para o contentor" << endl;
    for(size_t i=0;i<5;i++){
       cin >> myV[i];
    }
    for(auto El : myV){
        cout << El << "\t";
    }
    cout << endl;
    cout << "introduza o numero que quer procurar" << endl;
    cin >> procura;

    auto it = find(myV.begin(),myV.end(),procura);
    if(it !=myV.end()){
        cout << "esta na posicao:\t" << (size_t)distance(myV.begin(),it);
    }else{
        cout << "nao foi encontrado" << endl;
    }
    }
