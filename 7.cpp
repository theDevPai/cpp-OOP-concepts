//concept of a static member variable and static member function in a class.
#include<iostream>
using namespace std;

class stat
{
    private:
    const static int pi=3.14;

    public:
    void get_data()
    {
        cout<<pi;
    }

    void manipulate_data()
    {
        try
        {
            pi++;
        }
        catch(exception e)
        {
            cout<<e;
        }
    }
};

int main()
{
    cout<<"STATIC VARIABLE....";

    stat obj;

    obj.get_data();

    obj.manipulate_data();

    return 0;
}