#include<iostream>

#include<cstdlib>
using namespace std;
void start();
void menu();
void admin();
void driver();
int main()
{
    //system("Color A");
    start();
    return 0;
}
void start()
{
    menu();
}
void menu()
{
    system("CLS");
    cout<<"\tWelcome to IDLS";
    cout<<"\n\n\t1.Admin\t 2.Driver\n";
    int num;
    cin>>num;
    switch (num)
    {
        case '1':
            admin();
        case '2':
            driver();
    }
}
void admin()
{
    cout<<"\tAdmin";
    
}