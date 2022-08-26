// Priyanshu Garg
// 2010990553
// test - 5
//q1

//Time Complexity-O(n^2)
//Space Complexity-O(n^2)

#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>ans){
    cout<<"Subarrays with zero-sum are \n";
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";    
    }
}

void solve(vector<int>nums){
    int n=nums.size();
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        int sum=nums[i];
        vector<int>temp;
        temp.push_back(sum);
        for(int j=i+1;j<n;j++){
            if(sum!=0){
                sum+=nums[j];
                temp.push_back(nums[j]);
            }
        }
        if(sum==0){
            ans.push_back(temp);
        }
    }
    int sum=0;
    vector<int>temp;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        temp.push_back(nums[i]);
    }
    if(sum==0)ans.push_back(temp);
    print(ans); //function call to print the solution

}

int main(){

    int n;  //inputs
    cin>>n;
    vector<int>nums(n,0);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    solve(nums); // function call to solve the given problem

    return 0;
}