#include<iostream>
#include<array>
using namespace std;
void somaum(array<int, 5> ar);
int main(){
    array<int,5> myA = {10,20,30,40,50};
    somaum(myA);
}
void somaum(array<int, 5> ar)
{
   for(size_t i =0;i<5;i++){
    ar[i]++;
   }
}

