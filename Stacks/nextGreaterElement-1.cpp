//link for problem -> https://leetcode.com/problems/next-greater-element-i/

#include<bits/stdc++.h>
using namespace std;

vector<int> getNextGreater(vector<int> nums1,vector<int> nums2){

    unordered_map<int,int> nextGreater;
    stack<int> stack;
    vector<int> output;
    for(int i=0;i<nums2.size();i++){
        while(!stack.empty()&&stack.top()<nums2[i]){
            nextGreater[stack.top()]=nums2[i];
            stack.pop();
        }
        stack.push(nums2[i]);
    }

    for(int i=0;i<nums1.size();i++){
        if(nextGreater[nums1[i]]==0){
            output.push_back(-1);
        }
        else{
            output.push_back(nextGreater[nums1[i]]);
        }
    }
return output;
}

int  main(){

    vector<int> nums1= {4,1,2};
    vector<int> nums2= {1,3,4,2};
    vector<int> output=getNextGreater(nums1,nums2);
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
}