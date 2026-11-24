#include<iostream>
#include<vector>
using namespace std;
void listar(vector<int> &v){
    for(auto El: v){
       cout << El << "\t";
    }
}
int main(){
    vector<int> myV1(5);
    cout << "introduza 5 numeros" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
    }
    listar(myV1);
}