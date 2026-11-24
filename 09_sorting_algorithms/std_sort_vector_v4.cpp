#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout << "introduza o numero de elementos que quer no vetor" << endl;
    cin >> n;
    vector<int> myV1(n);
    cout << "introduza " << n << "valores no vetor"<<endl;
    for(size_t i=0;i<n;i++){
        cin >> myV1[i];
    }

    sort(myV1.begin(),myV1.end());
    for(auto El : myV1){
        cout << El << "\t";
    }
}