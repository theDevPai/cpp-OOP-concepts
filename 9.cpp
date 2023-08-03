//Car, with attributes for make, model, and year of manufacture. 
//Provide methods to start and stop the car's engine.
#include<iostream>
using namespace std;

class Car
{
    private:
    string make, model;
    int year;
    bool ignition=false;

    public:
    void set_data()
    {
        cout<<endl<<"Enter the car manufacturer name:";
        cin>>make;

        cout<<endl<<"Enter the model of the car:";
        cin>>model;

        cout<<endl<<"Enter the year the car was manufactured:";
        cin>>year;
    }

    bool start_engine()
    {
        if(ignition==false)
        {
            ignition=true;
            cout<<"The Car has started. You can drive."<<endl;
        }
        if(ignition==true)
        {
            cout<<endl<<"THE CAR IS ON"<<endl;
        }
        return ignition;
    }

    bool stop_engine()
    {
        if(ignition==true)
        {
            ignition==false;
            cout<<endl<<"The Car is stopped."<<endl;
        }
        if(ignition==false)
        {
            cout<<endl<<"THE CAR IS TURNED OFF"<<endl;
        }
        return ignition;
    }
};

int main()
{
    cout<<"WELCOME TO OUR CAR.....";
    Car seltos;
    int choice;

    seltos.set_data();
    cout<<endl<<"Enter \n1. for ignition\n2. Drive \n3.for stopping the engine \n4. exit the car"<<endl;
    while(1)
    {
        cin>>choice;
        if(choice==1)
        {
            seltos.start_engine();
        }
        else if(choice==2)
        {
            continue;
        }
        else if(choice==3)
        {
            seltos.stop_engine();
        }
        else if(choice==4)
        {
            cout<<"Thank you for driving with us. See you soon!";
            exit(0);
        }
    }
    return 0;
}