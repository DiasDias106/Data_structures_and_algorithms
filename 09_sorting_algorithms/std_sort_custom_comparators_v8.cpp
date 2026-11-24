#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool reverse(int a , int b);
void ordenar(vector<int> &v);
int main(){
    vector<int>myV1(5);
    cout << "introduza 5 numeros" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
    }

    ordenar(myV1);
}
bool reverse(int a , int b){
    return a >b;
}
bool imp(int a, int b){
    return (a%2);
}
 void ordenar(vector<int> &v){
        sort(v.begin(),v.end(),reverse);
        for(auto El : v){
            cout << El << endl;
        }
    }
