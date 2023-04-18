#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        int count = 0;
        int k = people.size();
        vector<int>::iterator iter = people.begin();
        cout << "initiating fn";
        for (int i = 0; i < k; i++)
        {
        }
    }
    vector<int> sort(vector<int> &arr)
    {
        int k = arr.size();
        vector<int>::iterator iter = arr.begin();
        for (int j = 0; j < k - 1; j++)
        {
            for (int i = 0; i < k - i - 1; i++)
                if (arr[i] > arr[i + 1])
                {
                    int temp;
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
        }
        return arr;
    }
};
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> people;
    int limit = 3, a, size, ele;
    cout << "ENter the size of arr::";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter element";
        cin >> ele;
        people.push_back(ele);
    }
    cout << "exited loop" << endl;
    display(people);
    Solution ob;
    ob.sort(people);
    display(people);
    cout << a << endl;
    return 0;
}