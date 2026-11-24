#include<iostream>
using namespace std;
void somaum(int ar[],int d);
void somaoutro(int *pnum, int d);
int main(){
    int num[3] = {10,20,30};
    size_t dim = sizeof(num)/sizeof(num[0]);
    somaum(num,dim);
    for(auto El: num){
        cout << El << endl;
    }
    somaoutro(num,dim);
    for(auto EL: num){
        cout << EL << endl;
    }
}
void somaum(int num[],int d){
    for(int i=0;i<d;i++){
        num[i]++;
    }
}
void somaoutro(int *pnum, int d){
    for(int i=0;i<d;i++){
        *pnum++;
    }
}