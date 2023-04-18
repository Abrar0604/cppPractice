#include <iostream>
using namespace std;
class students
{
public:
    static int count;
    string name;
    int age;
    float cgpa;
    void get_data(void);
    void display(void);
};
int students::count = 1;
void students::get_data(void)
{

    cout << "enter student " << count << " name::";
    cin >> name;
    cout << "age::";
    cin >> age;
    cout << "CGPA::";
    cin >> cgpa;
    count++;
}
void students::display(void)
{

    cout << name << "'s age is" << age << " and he scored " << cgpa << " CGPA in 1st sem" << endl;
}
int main()
{
    int m;
    cout << "no of students in the class::";
    cin >> m;
    students ninth[m];
    for (int i = 0; i < m; i++)
        ninth[i].get_data();
    for (int i = 0; i < m; i++)
        ninth[i].display();
    return 0;
}