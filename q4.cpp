#include<iostream>
using namespace std;

int main(){

int arr[]={1,3,5,7,8,9,10,14,17,19,23,56,77,88,99,101};
int t=99;
int s=0;
int e=2;

while(true){
    if(arr[e]<t and arr[s]<t){
        s=e+1;
        e=e*2;

    }
    else if(arr[e]>t and arr[s]<t){
        break;
    }
}

while(s<=e){
    int m=s+(e-s)/2;
    if(arr[m]>t){
        e=m-1;
    }
    else if (arr[m]<t){
        s=m+1;
    }
    else if (arr[m]==t){
        s=e+1;
        cout<<arr[m]<<" "<<m;
        break;
    }
}


}