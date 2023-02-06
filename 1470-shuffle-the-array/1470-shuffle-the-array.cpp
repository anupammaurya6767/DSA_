class Solution {
public:
   vector<int> shuffle(vector<int>& nums, int n) {
       int i=n-1;
        for(int j=(2*n)-1;j>=n;j--)
        {
            nums[j]=nums[j]<<10;
            nums[j]=nums[j]|nums[i];
            i--;
        }
        
        i=0;
        for(int j=n;j<nums.size();j++)
        {
            int numb1 = nums[j] & 1023;
            int numb2 = nums[j]>>10;
            nums[i]=numb1;
            nums[i+1]=numb2;
            i=i+2;
        }
        
        return nums;
    }
};