#include<iostream>
#include<vector>
using namespace std;
void calcmedia(vector<int>&v);
int main(){
    vector<int> myV(5);
    cout << "introduza 5 numeros" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV[i];
    }
    calcmedia(myV);
}
void calcmedia(vector<int>&v){
    float media =0;
    for(size_t i=0;i<5;i++){
        media += v[i];
    }

    for(auto El : v){
        cout << El << endl;
    }
    cout << "Media:" << media/5 << endl;
}