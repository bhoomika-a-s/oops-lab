#include <iostream>
using namespace std;

int main(){
    int arr1[25][25],arr2[25][25],arr3[50][50];
    int i,j,k,l,s,r,t;

    //matrix - I
    int m1,n1;
    cout<<"Enter the array size of first matrix (row,column): ";
    cin>>m1>>n1;
    //array decleration
    cout<<"Enter the elements to array 1 : ";
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
           cin>>arr1[i][j];
        }
    }

    //matrix - II
    int m2,n2;
    cout<<"Enter the array size of second matrix (row,column): ";
    cin>>m2>>n2;
    //array decleration
    cout<<"Enter the elements to array 2: ";
    for(int k=0;k<m2;k++){
        for(int l=0;l<n2;l++){
           cin>>arr2[k][l];
        }
    }

    //initializing the resultant matrix
     for(int r=0;r<m1;r++){
        for(int s=0;s<n1;s++){
            arr3[r][s]=0;
        }
     }

    //multiplication
    if(n1==m2){
        cout<<"The resultent matrix is: \n";
        for(int r=0;r<m1;r++){
            for(int s=0;s<n1;s++){
                for(int t=0;t<n2;t++){
                arr3[r][s]+=arr1[r][t]*arr2[t][s];
                }
            }
        }
        for(int r=0;r<m1;r++){
            for(int s=0;s<n1;s++){
                cout << arr3[r][s]<<" ";
            }cout<<endl;
     }
        
    }
    else
        cout<<"matrix cannot be multiplied";
}