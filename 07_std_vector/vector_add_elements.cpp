#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV = {10,20,30};
    size_t dim = sizeof(myV)/sizeof(myV[0]);
    cout << dim << endl;
    for(size_t i=0;i<(dim);i++){
        cout << "introduza numeros:\t";
        cin >> myV[i];
    }
    for(auto El: myV){
        cout << El << "\t";
    }
}

