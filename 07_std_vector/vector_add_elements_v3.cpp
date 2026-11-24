#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV1;
    cout << "introduza 5 valores" << endl;
    for(size_t i=0;i<5;i++){
        int valor;
        cin >> valor;
        myV1.push_back(valor);
    }
    for(auto El : myV1){
        cout << El << endl;
    }
}