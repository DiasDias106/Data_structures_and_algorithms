#include<iostream>
#include<algorithm>
#include<array>
#include<string>
#include<vector>
using namespace std;
int main(){
    array<int,5>myA;
    vector<string>myV(5);
    vector<string>myV2(5);
    for(int i=0;i<5;i++){
        cout << "introduza um numero" << endl;
        cin >> myA[i];
    }
    for(int i=0;i<5;i++){
        cout << "introduza um nome" << endl;
        cin >> myV[i];
    }
    for(int i=0;i<5;i++){
        myV2[i] = to_string(myA[i]) + myV[i];
    }
    for(auto El: myV2){
        cout << El << endl;
    }
}