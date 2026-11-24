#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
void ordena(array<int,5> &A);
bool reverso(int a , int b);
bool impar(int a , int b);
bool impreverso(int a , int b);
int main(){
    array<int,5> myA;
    int dim = myA.size();
    cout << "insira"<<endl;
    for(size_t i=0;i<dim;i++){
        cin >> myA[i];
    }

    ordena(myA);
}
bool reverso(int a , int b){
    return a>b;
}
bool impar(int a , int b){
    return a%2;
}
bool impreverso(int a , int b){
    return !(a%2);
}

void ordena(array<int,5> &A){
    sort(A.begin(),A.end(),impar);
    for(auto El : A){
        cout << El << "\t";
    }
    cout << endl;
}

/*
   auto it = find_if(A.begin(),A.end(),impreverso);
   sort(A.begin(),it);
   sort(it,A.end());
*/
