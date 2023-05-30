
#include<iostream>
using namespace std;
class stud
{
    private:
    int id;
    char name[20];
    public:
    int getdata()
    {
        cout<<"the id of student is:"<<endl;
        cin>>id;
        cout<<"the name of student is:"<<endl;
        cin>>name;
        return 0;
    }
    int display()
    {
        cout<<"the id of student is:"<<id<<endl;
        cout<<"the name of student is:"<<name<<endl;
        return 0;
    }
};
int main()
{
    stud obj;
    obj.getdata();
    obj.display();
    return 0;
}