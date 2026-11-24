#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV1(5);
    vector<int> myV2(5);
    vector<int> myV3(5);
    for(size_t i=0;i<5;i++){
        cout << "introduza 5 numeros para vetor 1" << endl;
        cin >> myV1[i];
    }
    for(size_t i=0;i<5;i++){
        cout << "introduza 5 numeros para vetor 2" << endl;
        cin >> myV2[i];
    }
    for(size_t i=0;i<5;i++){
        myV3[i] = (myV1[i] + myV2[i]);
    }
    for(auto El: myV3){
        cout << El << "\t";
    }
}