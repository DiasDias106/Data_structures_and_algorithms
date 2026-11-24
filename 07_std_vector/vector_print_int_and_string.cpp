#include<iostream>
#include<vector>
#include<string>
using namespace std;
void listint(const vector<int>&v);
void liststring(const vector<string> &s);
int main(){
    vector<int> myVi(5);
    vector<string> myVs(5);
    cout << "introduza 5 inteiros" << endl;
    for(size_t i=0;i<5;i++){
        cin >> myVi[i];
    }
    cin.ignore();

    cout << "introduza 5 strings" <<endl;
    for(size_t i=0;i<5;i++){
        getline(cin,myVs[i]);
    }

    listint(myVi);

    liststring(myVs);

}

void listint(const vector<int>&v){
    for(auto El : v){
        cout << El << "\t";
    }
    cout << endl;
}

void liststring(const vector<string> &s){
    for(auto El : s){
        cout << El << endl;
    }
}