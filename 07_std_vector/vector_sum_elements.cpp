#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV;
    cout << "introduza 5 valores" << endl;
    for(size_t i=0;i<5;i++){
        int valor;
        cin >> valor;
        myV.push_back(valor);
    }

    for(auto El : myV){
        cout << El << "\t";
    }
    
}