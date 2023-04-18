#include <iostream>
#include <vector>
using namespace std;
class sol{
    public:
    void roman_num(string s)
    {
        int k=s.size(),value=0;
        vector<int> con;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='M')con.push_back(1000);
            else if(s[i]=='D')con.push_back(500);
            else if(s[i]=='C')con.push_back(100);
            else if(s[i]=='L')con.push_back(50);
            else if(s[i]=='X')con.push_back(10);
            else if(s[i]=='V')con.push_back(5);
            else if(s[i]=='I')con.push_back(1);
            else cout<<"Enter valid values";
        }
        for(int i=0;i<k;i++)
        {
            cout<<con[i]<<" . ";
        }
        cout<<endl;
        for(int i=k-1;i>=0;i--)
        {
            if(con[i]<=con[i-1])value+=con[i];
            else{
                int temp=con[i]-con[i-1];
                i--;
                value+=temp;
            }
        }
        cout<<"The numerical value is "<<value;
    }
};


int main()
{
    string s;
    cout<<"Enter the string::";
    cin>>s;
    sol ob;
    ob.roman_num(s);
    return 0;
}