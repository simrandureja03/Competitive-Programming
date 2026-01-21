int EqualDifferenceWindow(vector<int>& nums,int k){
    deque<int> maxdq,mindq;
    int l=0,ans=0;

    for(int r=0;r<nums.size();r++){
        while(!maxdq.empty() && maxdq.back()<nums[r])
            maxdq.pop_back();
        while(!mindq.empty() && mindq.back()>nums[r])
            mindq.pop_back();

        maxdq.push_back(nums[r]);
        mindq.push_back(nums[r]);

        while(maxdq.front()-mindq.front()>k){
            if(nums[l]==maxdq.front()) maxdq.pop_front();
            if(nums[l]==mindq.front()) mindq.pop_front();
            l++;
        }

        ans=max(ans,r-l+1);
    }
    return ans;
}
