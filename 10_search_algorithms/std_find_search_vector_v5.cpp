#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> myA(5);
    int procura;
    cout << "introduza 5 numeros" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myA[i];
    }
    for(auto El : myA){
        cout << El << "\t";
    }
    cout << endl;
    cout << "introduza o que pretende encontrar" << endl;
    cin >> procura;
    auto it = find(myA.begin(),myA.end(),procura);
    if(it!= myA.end()){
        cout << "Encontrou no indice\t" <<
        (size_t)distance (myA.begin(),it);
    }else{
        cout << "não encontrado" << endl;
    }
}