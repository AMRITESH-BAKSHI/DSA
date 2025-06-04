#include<iostream>
using namespace std;
int ceiling(int arr[],int t,int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]>t){
            e=m-1;
        }
        else if(arr[m]<t){
            s=m+1;
           
        }
        else if(arr[m]==t){
            s=e;
            return arr[m];
        }




    }
    return arr[s-1];
}


int main(){

int arr[7]={2,3,5,9,14,20,28};
int r=ceiling(arr,4,7);

cout<<r;
}