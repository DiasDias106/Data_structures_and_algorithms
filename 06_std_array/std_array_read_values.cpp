#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> num;
    cout << "introduza um numero:"<<endl;
    for(size_t i=0;i<5;i++){
       cin >> num[i];
    }
    for(auto El: num){
        cout << El << endl;
    }
}