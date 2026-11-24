#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> myV1(5);
    cout << "introduza numeros:" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
    }
    myV1.pop_back();
    for(auto EL : myV1){
        cout << EL << endl;
    }
    
}