class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        nums=nums.sort();
        int current=nums[0];
        int current_Count1=0,maxCount=nums[0];
        int current_Count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==current)   
            {
                current_Count1+=1;
            }
        }

    }
};