#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> myV1 = {10,20,30,40,50};
    int procura;
    for(auto El : myV1){
        cout << El << endl;
    }
    cout << "introduza o numero que quer procurar" << endl;
    cin >> procura;

    auto it = find(myV1.begin(),myV1.end(),procura);
    if(it != myV1.end()){
        cout << "encontrou no indice:\t" << (size_t) distance(myV1.begin(),it);
    } else{
        cout << "numero nao encontrado" << endl;
    }
}