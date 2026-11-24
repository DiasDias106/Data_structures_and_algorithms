#include<iostream>
using namespace std;
int main(){
    int num[5];
    cout << "introduza 5 numeros para o array" << endl;
    for(size_t i=0;i<5;i++){
        cin >> num[i];
    }
    for(auto El : num){
        cout << El << endl;
    }
}