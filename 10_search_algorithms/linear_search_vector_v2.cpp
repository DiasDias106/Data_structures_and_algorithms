#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV1(5);
    int procura;
    cout << "introduza 5 numeros"<<endl;
    for(size_t i=0;i<5;i++){
        cin >> myV1[i];
    }
    auto it = find(myV1.begin(),myV1.end(),procura);
    if(it!=myV1.end()){
        cout << "encontrou indice" << endl;
        (size_t)distance(myV1.begin(),it);
    }else{
        cout << "nao encontrou"<< endl;
    }

}