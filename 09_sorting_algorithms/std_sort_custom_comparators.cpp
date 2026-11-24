#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool decresce(int i , int j){
    return i > j;
}
bool impar(int i, int j){
    return i%2;
}
int main(){
    vector<int>myv(5);
    cout<<"introduza numeros"<<endl;
    for(size_t i=0;i<5;i++){
        cin >> myv[i];
    }
    sort(myv.begin(),myv.end(),impar);
    for(auto El: myv){
        cout << El << "\t";
    }
}