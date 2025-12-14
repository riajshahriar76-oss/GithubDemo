#include<iostream>
using namespace std;

void arrayShow(int num[],int arraysize){

    for(int i = 0; i<arraysize; i++){
        cout<<num[i]<< " ";
    }
}
int main(){
    int arrayNum[5];
    cout<<"show 5 numbers:"<<endl;
   for(int i=0; i<5; i++){

        cin>> arrayNum[i];
    }
    cout<<"5 numbers are"<<endl;
    arrayShow(arrayNum,5);
}

