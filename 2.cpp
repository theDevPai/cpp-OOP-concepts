//represent a Student, with attributes for name, roll number, and marks in 
//three subjects. Provide methods to calculate the total marks and average
#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    char USN[10];
    float m1,m2,m3;

    public:
    void get_details()
    {
        cout<<"Enter your name:";
        cin>>name;

        cout<<"Enter your USN:";
        for(int i=0; i<10; i++)
        {
            cin>>USN[i];
        }

        cout<<"Enter marks of 3 subjects:";
        cin>>m1>>m2>>m3;
    }

    float total()
    {
        float total=0.0;
        total=m1+m2+m3;
        return total;
    }

    float average()
    {
        float avg=0.0;
        avg=(m1+m2+m3)/3.0;
        return avg;
    }

};

int main()
{
    cout<<"GETTING STUDENT DETAILS.....";
    student obj;
    obj.get_details();

    cout<<"CALCULATING TOTAL.....";
    cout<<endl<<"TOTAL:"<<obj.total()<<endl;

    cout<<"CALCULATING AVERAGE.....";
    cout<<endl<<"AVERAGE:"<<obj.average()<<endl;

    return 0;
}