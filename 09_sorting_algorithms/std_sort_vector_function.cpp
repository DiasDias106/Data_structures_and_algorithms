#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void organiza(vector<int> &v);
int main(){
    vector<int> myV(5);
    cout << "introduza 5 numeros ao vetor" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV[i];
    }
    organiza(myV);
}
void organiza(vector<int> &v){
    sort(v.begin(),v.end());
    for(auto El : v){
        cout << El << endl;
    }
}