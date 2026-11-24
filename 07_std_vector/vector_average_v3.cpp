#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myV(10);
    size_t dim = myV.size();
    int soma =0;
    float media =0;
    cout << "introduza 10 valores"<< endl;
    for(size_t i=0;i<10;i++){
        cin >> myV[i];
        soma += myV[i];
    }

     media = soma/dim;

    for(auto El : myV){
        cout << El << "\t";
    }

    cout << "media\t" << media << endl;

}