#include<iostream>
using namespace std;
void start();
void menu();
void admin();
void driver();
int main()
{
    start();
    return 0;
}
void start()
{
    menu();
}
void menu()
{
    cout<<"\tWelcome to IDLS";
    cout<<"\n\n\t1.Admin\t 2.Driver 3.Exit\n";
    int num;
    cin>>num;
    switch (num)
    {
        case 1:
            admin();
        case 2:
            driver();
        case 3:
            exit(0);
        default:
            cout<<"Enter 1 or 2";
    }
}
void admin()
{
    cout<<"\tAdmin";
    

    menu();
}
void driver()
{
    cout<<"Profile";


    menu();
}