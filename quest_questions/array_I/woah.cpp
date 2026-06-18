#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};

    for(int index=0; index < 5; index+=5){
        cout<<arr[index]<<endl;
    }
    return 0;
}