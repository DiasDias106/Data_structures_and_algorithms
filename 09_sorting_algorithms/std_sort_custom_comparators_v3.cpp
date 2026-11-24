#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool decre(int a, int b){
    return a > b;
}
bool imp(int a, int b){
    return a%2;
}
bool imprev(int a , int b){
    return !(a%2);
}
int main(){
    vector<int> myV1;
    int num;
    int op;
    cout << "introduza quantos numeros quer no vetor" << endl;
    cin >> num;
    cout << "introduza" << num << "valores no contentor" << endl;
    for(size_t i=0;i<num;i++){
        int valor;
        cin >> valor;
        myV1.push_back(valor);
    }
    auto it =find_if(myV1.begin(),myV1.end(),imprev);
    cout << "introduza como pretende organizar o array" <<
    "1-forma crescente\n" << "2-forma decrescente\n" << 
    "3-forma impar primeiro\n" << "4-forma impar decrescente" << endl;  
    cin >> op;
    switch(op){
        case 1:
        sort(myV1.begin(),myV1.end());
        break;
        case 2:
        sort(myV1.begin(),myV1.end(),decre);
        break;
        case 3:
        sort(myV1.begin(),myV1.end(),imp);
        case 4:
         sort(myV1.begin(),it);
         sort(it,myV1.end());
         break;
         default:
         return 0;
         break;
    }
}