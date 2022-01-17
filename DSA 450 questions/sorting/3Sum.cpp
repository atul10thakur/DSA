
vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i<nums.size()-2 ; i++){
            int left = i+1;
            int right = nums.size()-1;
            int sum = 0 - nums[i] ;
            if(i ==0 || (i>0 && nums[i] != nums[i-1])){
                while(left<right){
                   
                    if(nums[left]+nums[right] > sum){
                        right--;
                    }
                    else if(nums[left]+nums[right] < sum){
                        left++;
                    }
                    else{
                        vector<int>ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[left]);
                        ans.push_back(nums[right]);
                        v.push_back(ans);
                        
                        while(left < right && nums[left] == nums[left+1]) left++;
                        while(left < right && nums[right] == nums[right-1]) right--;
                        
                        left++ , right--;
                    
                        }
                 }
             }
        }
        return v;
    }
