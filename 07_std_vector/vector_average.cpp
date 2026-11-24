#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV1(5);
    float media =0;
    cout << "introduza 5 numeros" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
        media += myV1[i];
    }
    cout << "media\t" << media/5 << endl;
}