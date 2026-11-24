#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> myv(5);
    cout << "introduza valores"<<endl;
    for(int i=0;i<5;i++){
        cin >> myv[i];
    }
    sort(myv.begin(),myv.end());
    for(auto El: myv){
        cout << El << "\t";
    }
}