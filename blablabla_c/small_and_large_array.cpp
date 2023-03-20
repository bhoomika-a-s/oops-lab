#include <iostream>
using namespace std;

int main(){
    int size;
    int array[50];
    
    cout << "Enter the array size: ";
    cin >> size;

    cout << "Enter the array elements: ";
    for(int i=0; i<size; i++){
        cin >> array[i];
    }

    cout<< "The array is: ";
    for(int i=0; i<size; i++){
        cout << array[i]<<" ";
    }
    cout<<endl;

    //largest of array
    int max=array[0];
    for(int i=0;i<size;i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    cout<<"The largest number is:"<<max<<endl;

    //smallest of array
    int min=array[0];
    for(int i=0;i<size;i++){
        if(min > array[i]){
            min = array[i];
        }
    }
    cout<<"The smallest number is:"<<min<<endl;

    //sum of array elements
    int sum=0;
    for(int i=0;i<size;i++){
        sum += array[i];
    }
    cout<< "the sum is : "<<sum<<endl;
}