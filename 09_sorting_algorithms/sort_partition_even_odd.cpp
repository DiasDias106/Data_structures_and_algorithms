#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool firsteven(int a){
    return !(a%2);
}
int main(){
    vector<int> myV(5);
    cout << "introduza 5 numeros" << endl;
    for(size_t i=0;i<5;i++){
      cin >> myV[i];   
    }
    auto it = find_if(myV.begin(),myV.end(),firsteven);
    sort(myV.begin(),it);
    sort(it,myV.end());

    for(auto El : myV){
        cout << El << "\t";
    }
}