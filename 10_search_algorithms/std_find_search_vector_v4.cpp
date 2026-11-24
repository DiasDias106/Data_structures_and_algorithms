#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> myV ={10,20,30,40,50};
    int procura;
    cout << "introduza o valor que quer procurar" << endl;
    cin >> procura;
    for(auto El : myV){
        cout << El << endl;
    }
    auto it = find(myV.begin(),myV.end(),procura);
    if(it !=myV.end()){
        cout << "encontrou no indice" <<
    (size_t)distance(myV.begin(),it) <<endl;
    }else{
        cout << "nao encontrado"<<endl;
    }
}