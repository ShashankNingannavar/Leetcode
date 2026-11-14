class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int k=0;
        for(int i=0;i<nums.size();i++){
            int count=0;
            while(nums[i]!=0){
                int digit= nums[i]%10;
            count++;
            nums[i]=nums[i]/10;
            }
            if(count%2 == 0){
                k++;

            }

        }
        return k;
    }
};