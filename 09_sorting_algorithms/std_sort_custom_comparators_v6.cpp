#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool imp(int a , int b);
bool rev(int a, int b);
bool revimp(int a, int b);
int main(){
    vector<int> myV1(5);
    cout << "introduza 5 valores" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
    }
    sort(myV1.begin(),myV1.end(),revimp);

    for(auto El : myV1){
        cout << El << endl;
    }
}
bool imp(int a , int b){
    return a%2;
}
bool rev(int a, int b){
    return a > b;
}
bool revimp(int a, int b){
    return !(a%2);
}