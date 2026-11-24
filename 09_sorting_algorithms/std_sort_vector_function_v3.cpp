#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void ordena(vector<int> &v){
    sort(v.begin(),v.end());
    for(auto El: v){
        cout << El << "\t";
    }
}
int main(){
    vector<int> myV1(5);
    cout << "introduza 5 numeros" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
    }
    ordena(myV1);
}