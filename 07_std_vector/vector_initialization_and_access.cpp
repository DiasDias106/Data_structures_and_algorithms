#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myv[5];
    vector<int> myv2 = {1,20,30};
    vector<int> myv3(4); // coloca 4 posições com o valor 0
    vector<int> myv4 (5,38);// coloca 5 posições com o valor 38
    for(auto el : myv3){
        cout << el << "\t";
    }
    for(auto el : myv4){
        cout << el << "\t";
    }
    cout << myv2[1] << endl;
    cout << myv2.at(2) << endl;
    //cout << myv2.front() <<endl;
    
    
}