#include<iostream>
#include<vector>
using namespace std;
int ceiling(int arr[],int t,int sj){
    int s=0;
    int e=sj-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]>t){
            e=m-1;
        }
        else{
            s=m+1;
        }
        
    }
    return s-1 ;


}
int floor(int arr[],int t,int sj){
    int s=0;
    int e=sj-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]>t){
            e=m-1;
        }
        else{
            s=m+1;
        }
        
    }
    return e-1;


}


int main(){
        int nums[6]={5,7,7,8,8,10};
        int r=ceiling(nums,6,6);
        cout<<r;
        int r2=floor(nums,6,6);
        cout<<r2;
        
     }
    

    
