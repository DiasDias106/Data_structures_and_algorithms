#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isSorted(const vector<int> &v);
int main(){
    vector<int> myV1(5);
    cout << "introduza 5 valores para o contentor" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
    }
    sort(myV1.begin(),myV1.end());

    bool ret = isSorted(myV1);
    if(ret){
        cout << "o contentor esta de facto ordenado" << endl;
    }
}

bool isSorted(const vector<int> &v){
    bool crescente = false;
    bool decrescente = false;
    for(size_t i=0;i<v.size();i++){
        if(v[i] <  v[i+1]){
            crescente = true;
        
    }
    else if(v[i] > v[i+1]){
        decrescente=true;
    }
    }
    return decrescente || crescente;
    
}