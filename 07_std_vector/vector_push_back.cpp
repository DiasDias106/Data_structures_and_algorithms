#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myv;
    cout<<"introduza um numero:"<<endl;
    for(int i=0;i<5;i++){
        int valor;
        cin >> valor;
        myv.push_back(valor);
    }
    for(auto el: myv){
        cout << el << "\t";
    }
}