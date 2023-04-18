#include <iostream>
using namespace std;
class Solution
{
public:
    bool strongPasswordCheckerII(string password)
    {
        int a = password.length();
        if (a >= 8)
        {
            for (int i = 0, count = 0; i < a; ++i)
            {
                if (isupper(password[i]))
                    count++;

                if (count > 0)
                {
                    cout << "it has uppercase" << endl;
                    break;
                }
                else if(count==0&&i==a-1)
                    return false;
            }
            
            for (int i = 0, count = 0; i < a; i++)
            {
                if (islower(password[i]))
                    count++;
                 if (count > 0)
                 {
                    cout << "it has lower case" << endl;
                    break;

                   }
                  else if(count==0&&i==a-1)
                    return false;
            }
            for (int i = 0, count = 0; i < a; i++)
            {
                if (password[i] >= 33 && password[i] <= 43||password[i]==64)
                    count++;
                if (count > 0)
                {
                    cout << "it has spl char" << endl;
                    break;
                }
                else if(count==0&&i==a-1)
                    return false;
            }
            
            for (int i = 0, count = 0; i < a; i++)
            {
                if (password[i]>=48&&password[i]<=57)
                    count++;
                if (count > 0){
                    cout<<"it has a num  "<<i<<" "<<count<<endl;
                    break;
                    }
                else if(count==0&&i==a-1){
                    cout<<i<<" it doesnt have num "<<count<<endl;
                    return false;}
            }
            
            for (int i = 0,count=0; i < a - 1; i++)
            {
                if (password[i] == password[i + 1])
                return false;
            }
            return true;
        }
        else
            return false;
    }
};
int main()
{
    int k;
    string password;
    cin >> password;
    Solution ob;
    k = ob.strongPasswordCheckerII(password);
    cout << k;
}