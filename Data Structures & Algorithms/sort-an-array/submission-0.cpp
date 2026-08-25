class Solution {
public:
    //10 20 30 40 50 60
    void merge(vector<int>& nums, int low, int mid, int high)
    {
        //represents left subarray
        int i= low;
        //represents right subarray
        int j= mid+1;
        vector<int> temp;
        while(i<=mid && j<=high)
        {
            if(nums[i]<= nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }
        //right array finished
        while(i<=mid)
        {
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=high)
        {
            temp.push_back(nums[j]);
            j++;
        }
        for(int k = low; k <= high; k++)
        {
            nums[k] = temp[k-low];
        }
    }
    void mergesort(vector<int>& nums, int low, int high)
    {
        if(low==high)
            return;
        int mid= (low+high)/2;
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,low,mid,high);
        
    }
    vector<int> sortArray(vector<int>& nums) 
    {
        mergesort(nums,0,nums.size()-1);
        return nums;
        
    }
};