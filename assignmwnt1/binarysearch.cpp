#include<iostream>
using namespace std;
    int binarysearch( int arr[], int low, int high, int target){
       while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        else if (arr[mid]< target){
           low=mid+1;
        }
        else if(arr[mid]>target) high=mid-1;
       }
       return -1;
    }
int main(){
    int arr[10]={2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n=sizeof(arr);
     int target=23;
    int result=binarysearch(arr,0,n-1,target);
      cout<<"target: "<<result;

    
}