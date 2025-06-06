#include<iostream>
#include<vector>
using namespace std;
int peak(vector<int> nums){
int s=0;
int e=nums.size()-1;
int m;
int c;


while(s<=e){
    cout<<"helo";
    m=s+(e-s)/2;
    if(m<e and nums[m]>nums[m+1]){
        s= m;
        return m;
    }
    else if(m>s and nums[m]<nums[m-1]){
            s= m-1;
            return m-1;
    }
    else if (nums[s]==nums[m] and nums[e]==nums[m]){
        if(nums[s]>nums[s+1]){
            return s;
        }
        s=s+1;
        if(nums[e]<nums[e-1]){
            return e-1;
        }
            e=e-1;
    }

    else if (nums[s]<nums[m] or nums[s]==nums[m] and nums[m]>nums[e]) {

            s=m+1;
    }
    else{
        e=m-1;
    }

}
return -1;
}



int binarySearch(vector<int> nums,int target,int s,int e){
    int m;
while(s<=e){
    m=s+(e-s)/2;
    if(nums[m]>target){
        e=m-1;
    }
    else if(nums[m]<target){
        s=m+1;
    }
    else if(nums[m]==target){
        return m;
    }
}
return -1;







}

int main(){
    // vector<int> nums={3,5,1};
    vector<int> nums={2,2,9,2,2,2};
    int target=5;
int p=peak(nums);
cout<<p;
if(p==-1){
    cout<< binarySearch(nums,target,0,nums.size()-1);
}
else if(nums[p]==target){
cout<< p;
}
else if(target>=nums[0]){
     cout<< binarySearch(nums,target,0,p+1);
}
else if(target<=nums[0]){
     cout<< binarySearch(nums,target,p+1,nums.size()-1);
}
cout<< -1;




}