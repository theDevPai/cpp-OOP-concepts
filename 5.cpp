#include<iostream>
using namespace std;

class Time
{
    private:
    int hours, minutes, seconds;

    public:
    Time(int x, int y, int z)
    {
        hours=x;
        minutes=y;
        seconds=z;
    }

    void show_time()
    {
        cout<<endl;
        cout<<hours<<":"<<minutes<<":"<<seconds;
    }

    Time operator+(const Time& time2)
    {
        int totalseconds=seconds+time2.seconds;
        int minutes_from_seconds=totalseconds/60;
        int remaining_seconds=totalseconds%60;

        int totalminutes=minutes+time2.minutes+minutes_from_seconds;
        int hours_from_minutes=totalminutes/60;
        int remaining_minutes=totalminutes%60;

        int totalhours=hours+time2.hours+hours_from_minutes;

        return Time(totalhours, totalminutes, totalseconds);
    }
};

int main()
{
    cout<<"WELCOME TO OUR CLOCK...."<<endl;
    int h1, m1,s1,h2,m2,s2;

    cout<<"Enter the time1(in hours, minutes, seconds):";
    cin>>h1>>m1>>s1;


    cout<<"Enter the time2(in hours, minutes, seconds):";
    cin>>h2>>m2>>s2;
    

    Time time1(h1,m1,s1);
    Time time2(h2, m2, s2);

    Time sum=time1+time2;

    cout<<"Time 1:"<<endl;
    time1.show_time();

    cout<<"Time 2:"<<endl;
    time2.show_time();

    cout<<"Sum of time:"<<endl;
    sum.show_time();

    return 0;
}