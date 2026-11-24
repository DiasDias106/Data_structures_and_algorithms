#include<iostream>
#include<vector>
using namespace std;
void somar(vector<int>&v1, vector<int>&v2){
    vector<int>myV3(5);
    for(int i=0;i<5;i++){
        myV3[i] = v1[i] + v2[i];
    }
    for(int i=0;i<5;i++){
        cout << myV3[i] << "\t";
    }
}
int main(){
    vector<int>myV1(5);
    vector<int>myV2(5);
    cout << "introduza 10 numeros" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
        cin >> myV2[i];
    }
    somar(myV1,myV2);
}
