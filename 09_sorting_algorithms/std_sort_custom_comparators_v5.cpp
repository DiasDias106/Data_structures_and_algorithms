#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool decrescente(int a, int b);
bool impar(int a, int b);
bool func(int x);
int main(){
    vector<int> myV1 = {1,5,3,87,65,11};
    vector<int> myV2 = {1,5,3,87,62,11};
    vector<int> myV3 = {1,5,3,87,62,11};
    for(auto El: myV1){
        cout << El << endl;
    }
    sort(myV1.begin(),myV1.end(),decrescente);
     sort(myV2.begin(),myV2.end(),impar);

     auto it = find_if(myV3.begin(),myV3.end(),func);
     sort(myV3.begin() ,it);
     sort(it, myV3.end());
     for(auto El : myV1){
        cout << El << "\t";
     }
     cout << "separador"<<endl;
     for(auto El: myV2){
        cout << El << "\t";
     }
     cout << "separador" << endl;
      for(auto El: myV3){
        cout << El << "\t";
     }
}
 bool decrescente(int a, int b){
    return a>b;
 }
 bool impar(int a, int b){
    return a%2;
 }
 bool func(int x){
   return !(x%2);
 }