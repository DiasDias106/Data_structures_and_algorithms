#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> myA;
    float media;
    cout << "introduza numeros"<<endl;
    for(size_t i=0;i<4;i++){
        cin >> myA[i];
        media += myA[i];
    }
    for(auto El : myA){
        cout << El << endl;
    }
    cout << media/4<<endl;
}