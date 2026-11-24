#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myv;
    //size_t dim = sizeof(myv)/sizeof(myv[0]);
    //cout << dim << endl;
    cout<<"introduza numeros"<<endl;
    for(int i=0;i<5;i++){
        cin >> myv[i];
    }
    for(auto El: myv){
        cout << El << endl;
    }
}
