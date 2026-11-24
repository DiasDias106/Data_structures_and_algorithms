#include<iostream>
using namespace std;
int main(){
    int num[5];
    for(int i=0;i<5;i++){
        cout << "introduza um numero:"<< endl;
        cin >> num[i];
    }
     for(int i=0;i<5;i++){
        cout << num[i] << endl;
       
    }
}