#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
    vector<int> myv={10,30,12,4,35};
    size_t dim = sizeof(myv)/sizeof(myv[0]);
    cout << dim << endl;
    for(auto il: myv){
        cout << il << "\t";
    }
    cout << endl << "separador" << endl;
    sort(myv.begin(),myv.end());
    for(auto el: myv){
        cout << el << "\t";
    }
}