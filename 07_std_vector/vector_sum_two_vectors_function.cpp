#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV1(5);
    vector<int> myV2(5);
    vector<int> myV3(5);

    cout << "introduza 5 elementos para o vetor 1"<<endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
    }
    
    cout << "introduza 5 elementos para o vetor 2"<<endl;
    for(size_t i=0;i<5;i++){
        cin >> myV2[i];
    }
    
    for(size_t i=0;i<5;i++){
        myV3[i] = myV1[i] + myV2[i];
    }

    for(auto El: myV3){
        cout << El << "\t";
    }
}