class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> result;
        // if(candies.size()==0) return ans;
        int maxVal = INT_MIN;
        for (int i = 0; i < candies.size(); i++)
        {
            maxVal = max(maxVal, candies[i]);
        }
        int temp = 0;
        for (int i = 0; i < candies.size(); i++)
        {
            /// temp = candies[i] + extraCandies;
            if (candies[i] + extraCandies >= maxVal)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};