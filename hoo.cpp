#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int>::iterator itr = nums.begin();
        for (int i = 0, j = 1; j < nums.size(); )
        {
            if (nums[i] == nums[j])
            {
                nums.erase(itr + j);
            }
            else
            {
                i++;j++;
            }
        }
        int s = nums.size();
        return s;
    }
};
void display(vector<int> &nums)
{
    int l = nums.size();
    for (int i = 0; i < l; i++)
    {
        cout << nums[i] << " . ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums;
    int k, v;
    cout << "Enter the size of vector::";
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cout << "Enter " << i + 1 << " value::";
        cin >> v;
        nums.push_back(v);
    }
    display(nums);
    std::sort(nums.begin(),nums.end());
    display(nums);
    Solution ob;
    ob.removeDuplicates(nums);
    display(nums);
    return 0;
}