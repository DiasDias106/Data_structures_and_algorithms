#include<iostream>
#include<vector>
using namespace std;
int add(vector<int> &v){
    cout << "introduza numeros"<< endl;
    for(int i=0;i<10;i++){
        cin >> v[i] ;
    }
    for(int i=0;i<10;i++){
        cout << v[i] << "\t";
    }
}
int main(){
    vector<int> myV(10);
    add(myV);
}