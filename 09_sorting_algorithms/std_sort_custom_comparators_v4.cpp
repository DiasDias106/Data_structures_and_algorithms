#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ord(int a , int b);
bool imp(int a , int b);
int main(){
   vector<int> myV(5);
   cout << "introduza 5 numeros" << endl;
   for(size_t i=0;i<5;i++){
    cin >> myV[i];
   }

   cout << endl;
   cout << endl;

   sort(myV.begin(),myV.end(),ord);

   for(auto El : myV){
    cout << El << endl;
   }

   cout << endl;
   cout << endl;
   sort(myV.begin(),myV.end(),imp);

   for(auto El : myV){
    cout << El << endl;
   }
   cout << endl;
   cout << endl;
}
bool ord(int a , int b){
    return a>b;
}

bool imp(int a , int b){
    if(a%2) return a;
}