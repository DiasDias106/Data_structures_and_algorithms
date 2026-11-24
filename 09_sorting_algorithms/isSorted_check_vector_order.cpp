#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isSorted(const vector<int> &v);
int main(){
    vector<int> myv1(5);
    cout << "introduza:\t" << myv1.size() << "\tnumeros"<<endl;
    for(size_t i=0;i<5;i++){
        cin >> myv1[i];
    }

    sort(myv1.begin(),myv1.end());

    bool ret = isSorted(myv1);
    if(ret){
        cout << "o vetor esta de facto organizado" << endl;
        for(auto El : myv1){
            cout << El << "\t";
        }
    }
}


bool isSorted(const vector<int> &v){
    if(v.empty() || v.size()==1){
        return true;
    }
    bool crescente = false;
    bool decrescente = false;
    for(size_t i=0;i<v.size();i++){
         if(v[i] < v[i+1]){
            crescente = true;
         }
         if(v[i] > v[i+1]){
            decrescente = true;
         }

         return crescente || decrescente;
    }
    
}