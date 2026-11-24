#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> myA;
    int dim = myA.size();
    int soma = 0;
    float media =0;
    cout << "introduza 5 valores" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myA[i];
        soma += myA[i];
    }
    media = soma/dim;
for(auto El : myA){
    cout << El << "\t";
}
cout << endl;
cout << "Soma\t" << soma << endl;
cout << "media\t" << media << endl; 
}
