#include<iostream>
using namespace std;
int fatorial(int val);
int main(){
    int valor;
    cout << "introduza valor" << endl;
    cin >> valor;
    int ret = fatorial(valor);
    cout << "o fatorial do numero e:" << ret << endl;
}

int fatorial(int val){
    if(val == 0){
        return 1;
    }else{
        return val * fatorial(val-1);
    }
}