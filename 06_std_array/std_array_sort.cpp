#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> myA;
    cout << "introduza numeros" << endl;
    for(size_t i=0;i<4;i++){
        cin >> myA[i];
    }
    
}