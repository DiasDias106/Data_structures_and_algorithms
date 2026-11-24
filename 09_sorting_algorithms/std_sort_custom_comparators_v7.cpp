#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool imp(int a, int b){
    return a%2 ;
}
bool reverse(int a , int b){
    return a>b;
}
bool revinp(int a, int b){
   return !(a%2);
}
int main(){
    vector<int> myV1(5);
    cout << "introduza 5 valores para o vetor" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
    }
    sort(myV1.begin(),myV1.end(),imp);
    //auto it = find_if(myV1.begin(),myV1.end(),revinp);
    //sort(myV1.begin(),it);
    //sort(it,myV1.end());

    for(auto El: myV1){
        cout << El << endl;
    }
}
/*auto it = find if(myA.begin(),myA.end(),revint)
sort(myV.begin(),it);
sort(it,myV.end());

*/