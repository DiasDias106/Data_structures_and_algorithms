#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV1;
    cout << "introduza 5 valores no vetor" << endl;
    for(size_t i=0 ; i<5;i++){
        cin >> myV1[i];
    }
    func(myV1);
}

void func(vector<int> &v){
    float media =0;
    for(size_t i=0;i<5;i++){
        media += v[i];
    }
    cout << "media" << media << endl;
}