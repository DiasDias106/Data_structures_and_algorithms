#include<iostream>
using namespace std;
int main(){
    int *ptr = nullptr;
    int total;
    cout<< "introduza total"<<endl;
    cin >> total;
    ptr = new(nothrow) int[total];
    if(!ptr) return 8;
    for(int i=0;i<total;i++){
        cout << "incira numeros"<<endl;
       cin >> ptr[i];
    }
    cout << "valores lidos \n";
    for(int i=0;i<total;i++){
        cout << ptr[i] << endl;
    }
    delete []ptr;
    return 0;
}