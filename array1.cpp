#include<iostream>
using namespace std;
int main() {
int num1[2][2] = {{2,23},{32,54}};
cout<<num1[1][1] <<endl;
int row, col;
cout<<"Enter the size of row: "<< endl;
cin>> row;
cout<<"Enter the size of col: "<<endl;
 cin>> col;
int num[row] [col];

cout<<"Enter the input elements: "<<endl;

for (int i = 0; i<row; i++) {
     for (int j=0; j<col; j++) {
cin>> num[i][j];
}
}
cout<<"The output elements are: for "<<endl;

for(int i = 0; i<row; i++) {
     for (int j=0; j<col; j++) {
         cout<<num [i][j]<<" ";

}
}
}
