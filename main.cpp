#include <iostream>
#include<string.h>
using namespace std;
class MyPhBook
{
private:
    string name;
    string area;
    string phNum;
public:
    void setName(string n)
    {
        name=n;
    }
    void setArea(string a)
    {
        area=a;
    }
    void setNum(string ph)
    {
        phNum=ph;
    }
    void displayBook()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Area = "<<area<<endl;
        cout<<"Mobile = "<<phNum<<endl;
        cout<<"*******************************"<<endl;
    }
};

int main()
{
    MyPhBook c1,c2,c3,c4,c5;

    c1.setName("Salman Khan");
    c1.setArea("Dhanmondi");
    c1.setNum("01859592");

    c2.setName("Sakib Khan");
    c2.setArea("Jatrabari");
    c2.setNum("0172659");

    c3.setName("RAihan Kabir");
    c3.setArea("Gulshan");
    c3.setNum("01986546");

    c4.setName("Mustafa");
    c4.setArea("Mohammadpur");
    c4.setNum("01589891");

    c5.setName("Tamim");
    c5.setArea("Banani");
    c5.setNum("016418456");

    c1.displayBook();
    c2.displayBook();
    c3.displayBook();
    c4.displayBook();
    c5.displayBook();

    return 0;
}
