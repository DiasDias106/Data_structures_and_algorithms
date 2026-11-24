#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> myA1;
    array<int,5> myA2;
    float med1=0, med2=0;

    cout << "introduza 5 valores para o array 1" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myA1[i];
        med1 += myA1[i];
    }
    cout << "introduza 5 valores para o array 2" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myA2[i];
        med2 += myA2[i];
    }
    for(auto El : myA1){
        cout << El << "\t";
    }
    cout << "media 1" << med1/5 << endl;
    for(auto El : myA2){
        cout << El << "\t";
    }
    cout << "media 2" << med2/5 << endl;


}