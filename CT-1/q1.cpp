// Priyanshu Garg
// 2010990553
// test - 5
//q1

//Time Complexity-O(n^2)
//Space Complexity-O(n)

#include <bits/stdc++.h>
using namespace std;

void print(vector<int>ans){
    for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
    }
    cout<<"\nlength - "<<ans.size();
}

void solve(vector<int>nums,int target){
    int n=nums.size();
    vector<int>ans={};
    for(int i=0;i<n;i++){
        int sum=0;
        vector<int>temp;
        for(int j=i;j<n;j++){
            if(sum<target){
                sum+=nums[j];
                temp.push_back(nums[j]);
            }
            else break;
        }
        if(sum==target){
            if(ans.size()<temp.size()){
                ans=temp;
            }
        }
    }
    print(ans); //function call to print the solution

}

int main(){

    int n;  //inputs
    cin>>n;
    vector<int>nums(n,0);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;

    solve(nums,target); // function call to solve the given problem

    return 0;
}