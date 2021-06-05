//link for problem ->  https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

    
     vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> result;
        
        int firstoccur=-1;
        int lastoccur=-1;
        
        int start = 0 ;
        int end   = nums.size()-1;
        
        while(start<=end){
            
            int mid  = start + (end-start)/2;
            
            if(target==nums[mid]){
                firstoccur=mid;
                end=mid-1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
            
        }
        
        
         start = 0 ;
         end   = nums.size()-1;
        
        while(start<=end){
            
            int mid  = start + (end-start)/2;
            
            if(target==nums[mid]){
                lastoccur=mid;
                start=mid+1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
            
        }
        
        result.push_back(firstoccur);
        result.push_back(lastoccur);
        
        return result;
    
        
    }