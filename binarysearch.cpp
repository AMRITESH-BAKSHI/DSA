#include<iostream> //hello this is amitesh
using namespace std;
int binarysearch(int arr[],int t){
    if (arr[0]>arr[sizeof(arr)/sizeof(int)]){
        cout<<"asc";
        int s=0,e=sizeof(arr)/sizeof(int);
        int m, t=7;
        while (s!=e){
            m=s+(e-s)/2;
            
            if (arr[m]>t){
                e=m-1;
            }
            else if (arr[m]<t){
                s=m+1;
            }
            else if (arr[m]==t){
                s=e;
                return arr[m];
                
            }
            
            
            
        }
        
    }
    else{
        int s=0,e=sizeof(arr)/sizeof(int);
        int m, t=7;
        while (s!=e){
            m=s+(e-s)/2;
            
            if (arr[m]>t){
                s=m+1;
            }
            else if (arr[m]<t){
                e=m-1;
            }
            else if (arr[m]==t){
                s=e;
                return arr[m];
                
            }
            
            
            
        }
        
        
    }
    
    return -1;

}
int main(){

int arr[]={1,2,3,4,5,6,7,8,9};
int s=binarysearch(arr,7);
cout<<s;
}