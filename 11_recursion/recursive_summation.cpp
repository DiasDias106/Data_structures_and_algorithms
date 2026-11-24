#include<iostream>
using namespace std;
int somatorio(int val);
int main(){
    int valor;
    int ret;
    cout << "introduza valor:" << endl;
    cin >> valor;
    ret = somatorio(valor);
    cout << "somatorio do valor :" << ret << endl;
}

int somatorio(int val){
    if(val == 0){
        return 0;
    }else{
        return val + somatorio(val-1);
    }
}