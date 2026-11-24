#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> myv1(5);
    vector<int> myv2(5); 
    vector<int> myv3(5); 

    for(int i=0; i<5; i++){
        cout << "Introduza um valor";
        cin >> myv1[i];
        cout << "Introduza um valor ";
        cin >> myv2[i];
        myv3[i] = myv1[i] + myv2[i]; 
    }

    cout << "Resultado da soma dos vetores:" << endl;
    for(auto el: myv3){
        cout << el << "\t";
    }
    cout << endl;

    return 0;
}