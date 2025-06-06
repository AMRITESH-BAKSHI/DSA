
#include<iostream>
#include<vector>
using namespace std;
int rotatedarray(vector<int> nums,int target){
int s=0;
int e=nums.size()-1;
int m;
int c;
while(s<=e){
    m=s+(e-s)/2;
    if(nums[m]>nums[m+1]){
        s= m;
        break;
    }
    else if(nums[m]<nums[m-1]){
            s= m-1;
            break;
    }
    else if (nums[0]>nums[m]){
            e=m-1;
    }

    else if (nums[0]<nums[m]){
            s=m+1;
    }


}
cout<<s;
int e1= s+1;
int s1=0;
while(s1<=e1){
    m=s1+(e1-s1)/2;
    if(nums[m]>target){
        e1=m-1;
    }
    else if(nums[m]<target){
        s1=m+1;
    }
    else if(nums[m]==target){
        return m;
    }
}


int e2= nums.size()-1;
int s2=s+1;
while(s2<=e2){
    m=s2+(e2-s2)/2;
    if(nums[m]>target){
        e2=m-1;
    }
    else if(nums[m]<target){
        s2=m+1;
    }
    else if(nums[m]==target){
        return m;
    }
}
return -1;












}

int main(){

    vector<int> nums={3,4,5,6,1,2};
vector<int> nums1={4,5,6,7,0,1,2};
vector<int> nums2={3,1};
vector<int> nums3={3,5,1};
vector<int> nums4={1,2,3,4,5,6,7,8};
int target=4;
int r=rotatedarray(nums4,target);
cout<<r;
     
}