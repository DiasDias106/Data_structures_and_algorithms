#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> juntavetor(vector<int> &myV1, vector<int> &myV2){
    vector<int> Vfalso;
    for(auto EL : myV1){
        Vfalso.push_back(EL);
    }
    for(auto EL : myV2){
        Vfalso.push_back(EL);
    }
    return Vfalso;
}
int main(){
 vector<int> myV1 = {1,2,3,4,5};
 vector<int> myV2 = {6,7,8,9,10};
 vector<int> myV3 =juntavetor(myV1,myV2);
 cout<< "introduza numeros" << endl;
 for(size_t i=0;i<5;i++){
    cin >> myV1[i];
    cin >> myV2[i];
 }
 for(auto EL: myV3){
    cout << EL <<"\t";
 }
}