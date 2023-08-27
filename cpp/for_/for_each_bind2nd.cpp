#include<iostream>
#include<vector>
#include<algorithm>
#include<typeinfo>
using namespace std;

class AbstractDoor
{
public:
    virtual void open(const char* str) const = 0; //定义纯虚函数

    virtual ~AbstractDoor() {}
};

class HorizontalDoor: public AbstractDoor
{
    public:
    void open(const char* str) const
    {
        cout<<str<<"open door horizontally"<<endl;
    }
};

class VerticalDoor: public AbstractDoor
{
    public:
    void open(const char* str) const
    {
        cout<<str<<"open door vertically"<<endl;
    }

};

class DoorController
{
protected:
    vector<AbstractDoor*> _doorVec;

public:
    void addDoor(AbstractDoor* door)
    {
        _doorVec.push_back(door);
    }

    void openDoor() const
    {
        for_each(_doorVec.begin(), _doorVec.end(),
		       	bind2nd(mem_fun(&AbstractDoor::open), "Jhon "));
    }

    ~DoorController() 
    {
        for_each(_doorVec.begin(), _doorVec.end(), [](AbstractDoor* p)
        {
            delete p;
            p = nullptr;
        });
    }
};

int main()
{
    DoorController dc;
    dc.addDoor(new HorizontalDoor());
    dc.addDoor(new VerticalDoor());
    dc.openDoor();
}
