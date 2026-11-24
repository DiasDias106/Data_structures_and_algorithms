#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool rev(int a, int b);
bool inp(int a, int b);
bool revinp(int a , int b);
int main(){
    vector<int> myV(5);
    cout << "introduza 5 valores para o vetor" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV[i];
    }
    sort(myV.begin(),myV.end(),rev);
    cout << endl;
    for(auto El : myV){
        cout << El << "\t";
    }
}

bool rev(int a, int b){
    return a>b;
}

bool inp(int a, int b){
    return (a%2);
}

bool revinp(int a , int b){
    return !(a%2);
}
