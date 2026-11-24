#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool decrescente(int a, int b){
    return a > b;
}
int main(){
    vector<int> myV(5);
    size_t dim = sizeof(myV)/sizeof(myV[0]);
    cout << "introduza numeros" << endl;
    for(size_t i=0;i<5;i++){
       cin >> myV[i];
    }
    sort(myV.begin(),myV.end(),decrescente);
    for(auto EL: myV){
        cout << EL << endl;
    }
}