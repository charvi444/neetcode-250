class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mpp;
        //build a max head
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int maxf=0;
        for(auto it: mpp)
        {
            pq.push({it.second,it.first});
        }
        for(int i=0;i<k;i++)
        {
            int front= pq.top().second;
            ans.push_back(front);
            pq.pop();
        }
        return ans;
      
    }
};
