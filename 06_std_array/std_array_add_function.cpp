#include<iostream>
#include<array>
using namespace std;
void add(array<int,4>&A){
    cout << "introduza valores"<<endl;
    for(size_t i=0;i<4;i++){
       cin >> A[i];
    }
    for(auto El : A){
        cout << El << "\t";
    }
}
int main(){
    array<int,4> myA1;
    add(myA1);
}