
#include<iostream>
#include<vector>
using namespace std;

int rotatedarray(vector<int> nums,int target){
     
     int s=0;
     int e=nums.size()-1;
     int m;
     int ans=-1;
     if(nums.size()==2){
if (nums[0]>nums[1]){

    


while(s<=e){
        // cout<<"h3";
        m=s+(e-s)/2;
        if(nums[m]>target){
            s=m+1;
        }
        else if(nums[m]<target){

            e=m-1;
            cout<<s<<e;
            }
            else if(nums[m]==target){
                
                
                return  m;
            }
            
        }
        return -1;

















}
else{


    while(s<=e){
        // cout<<"h3";
        m=s+(e-s)/2;
        if(nums[m]>target){
            e=m-1;
        }
        else if(nums[m]<target){

            s=m+1;
            // cout<<s<<e;
            }
            else if(nums[m]==target){
                
                
                return  m;
            }
            
        }
        return -1;
    }
    }

     else{

        if(nums[0]<nums[nums.size()-1]){



while(s<=e){
        // cout<<"h3";
        m=s+(e-s)/2;
        if(nums[m]>target){
            e=m-1;
        }
        else if(nums[m]<target){

            s=m+1;
            // cout<<s<<e;
            }
            else if(nums[m]==target){
                
                
                return  m;
            }
            
        }
        return -1;



        }

        else{

            
            while(s!=e){
                // cout<<"h";
                m=s+(e-s)/2;
                if(nums[m]>nums[m-1]){
                    s=m;
                }
                else{
                    e=m-1;
                }
            }
            
            // cout<<s<<e;
            int peak=s;
            int f=0;
            s=0;
            while(s<=peak){
                // cout<<"h2";
                m=s+(peak-s)/2;
                if(nums[m]>target){
                    peak=m-1;
                }
                else if(nums[m]<target){
                    s=m+1;
                }
                else if(nums[m]==target){
                    
                    return  m;
                }
                f=1;
                
            }
        }
            
            s=e;
            e=nums.size()-1;
            // cout<<s<<e;            
            while(s<=e){
                // cout<<"h3";
                m=s+(e-s)/2;
                if(nums[m]>target){
                    e=m-1;
                }
                else if(nums[m]<target){
                    
                    s=m+1;
                    // cout<<s<<e;
                }
                else if(nums[m]==target){
                    
                    
                    return  m;
                }
                
            }
                
            return -1;
            }
            
}
 int main(){
vector<int> nums={3,4,5,6,1,2};
vector<int> nums1={4,5,6,7,0,1,2};
vector<int> nums2={3,1};
vector<int> nums3={1,3,5};
int target=0;
int r=rotatedarray(nums3,target);
cout<<r;
     
     

    }
