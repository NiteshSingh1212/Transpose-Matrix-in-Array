#include<iostream>
using namespace std;
void Transpose(int arr[][3],int r,int c ,int transposeArr[][3]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        transposeArr[j][i]=arr[i][j];
        }
    }
}
void PrintT(int arr[][3],int r,int c ){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
       cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){
    int r=3,c=3;

    // int arr[3][3];
     int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};

    cout<<"Original matrix"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
  int transposeArr[3][3];
    Transpose(arr,r,c,transposeArr);
    cout<<"Transpose Matrix"<<endl;
    PrintT(transposeArr,r,c);

    
}