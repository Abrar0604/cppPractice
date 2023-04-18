#include <iostream>
using namespace std;
class Solution
{
public:
    void isPalindrome(int x)
    {
        // int *a, i = 0;
        // while (x > 0)
        // {
        //     int rem;
        //     rem = x % 10;
        //     a =&rem;
        //     cout<<"The value  of rem is::"<<*a<<" its address is "<<a<<endl;
        //     i++;a=a++;
        //     x = x / 10;
        // }
        // for(int j=0;j<i;j++)
        // {
        //     a--;
        //     cout<<endl<<"The value adress of a is::"<<a<<endl;
        //     cout<<*a<<" ";
        // }
        // cout<<endl<<"no of digits"<<i<<endl;
                int rev=0,rem,temp=x;
        while(x>0)
        {
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        cout<<rev<<endl;
        cout<<temp<<endl;
        if(x==rev)cout<<temp<<" Is palindrome";
        else cout<<temp<<"isn't palindrome";
    }
};
int main()
{
    int x, k;
    cout << "Enter the number::";
    cin >> x;
    Solution ob;
    ob.isPalindrome(x);
    // cout << endl
    //      << k;
    return 0;
}