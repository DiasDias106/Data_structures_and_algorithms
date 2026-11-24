#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> myA1;
    array<int,4> myA2;
    array<int,4> myA3;

    for(size_t i=0;i<4;i++){
        cout << "introduza 4 numeros" << endl;
        cin >> myA1[i];
    }
    for(size_t i=0;i<4;i++){
        cout << "introduza 4 numeros" << endl;
        cin >> myA2[i];
    }
    for(size_t i=0;i<4;i++){
        myA3[i] = myA1[i] + myA2[i];
    }
    for(auto EL : myA3){
        cout << EL << endl;
    }
}