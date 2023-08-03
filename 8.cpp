//Book, with attributes for title, author, and publication year. 
//Include a method to display the book details.
#include<iostream>
using namespace std;

class Book
{
    private:
    string title, author;
    int year;

    public:
    void set_data()
    {
        cout<<"Enter the title of the book:";
        cin>>title;

        cout<<"Enter the author of the book:";
        cin>>author;

        cout<<"Enter the year the book was published in:";
        cin>>year;
    }

    void get_data()
    {
        cout<<"TITLE----------------------AUTHOR------------------------YEAR"<<endl;
        cout<<title<<"\t\t"<<author<<"\t\t\t\t"<<year;
    }
};

int main()
{
    cout<<"BOOK DETAILS......."<<endl;
    Book b1;

    b1.set_data();

    b1.get_data();

    return 0;
}