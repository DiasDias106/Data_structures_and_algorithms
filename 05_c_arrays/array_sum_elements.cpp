#include<iostream>
using namespace std;
int main(){
    int numero[10];
    int soma =0;
    cout << "introduza 10 numeros"<<endl;
    for(size_t i=0;i<10;i++){
        cin >> numero[i];
        soma += numero[i];
    }
    cout <<"soma\t" << soma;
}