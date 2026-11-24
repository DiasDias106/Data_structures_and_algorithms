#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> myV = {1,10,3,2,7};
    sort(myV.begin(),myV.end());
    for(auto El : myV){
        cout << El << "\t";
    }
}