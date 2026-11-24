#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> myV1 = {2,3,4,7,9,6,10};
    int procura ;
    cout <<"introduza o numero que quer procurar:"<<endl;
    cin >> procura;

    auto it = find(myV1.begin(),myV1.end(),procura);
    if(it != myV1.end()){
        cout << "o valor foi encontrado na posicao:" << (size_t) distance(myV1.begin(),it) << endl;
    }else{
        cout << "o numero que introduziu nao existe" << endl;
    }
}