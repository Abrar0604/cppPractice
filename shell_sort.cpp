#include <iostream>
#include <vector>
using namespace std;
class sol
{
public:
    vector<int> shell_sort(vector<int> &arr)
    {
        int k = arr.size();
        vector<int>::iterator iter=arr.begin();
        for (int j = 0; j < k - 1; j++)
        {
            for (int i = 0; i < k - i ; i++)
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
    vector<int> arr;
    int size, ele;
    cout << "Enter the size of vect::";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the ele ::";
        cin >> ele;
        arr.push_back(ele);
    }
    display(arr);
    sol ob;
    ob.shell_sort(arr);
    display(arr);
    // vector<int>::iterator i=arr.begin();
    // arr.erase(i);
    // display(arr);
    return 0;
}