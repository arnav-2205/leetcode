class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      sort(nums.begin(), nums.end());
      unordered_map<int,int> freq;
      for(int i=0; i<nums.size();i++){
         freq[nums[i]]++;
      }
     
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    for (auto x : freq) {
            pq.push({x.second, x.first});

            if (pq.size() > k) {
                pq.pop();
            }
        }

    vector<int> ans;

     while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;

    }
};