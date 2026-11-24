#include<iostream>
#include<string>
using namespace std;
int main(){
    int num[5] = {10,20,30};
    for(int i=0;i<5;i++){
        cout << num[i]<<endl;
    }
    string nome[] = {"Ana","Jorge","Paulo"};
    size_t dim = sizeof(nome)/sizeof(nome[0]);
    cout << dim << endl;
    for(auto El: nome){
        cout << El <<endl;
    }
}