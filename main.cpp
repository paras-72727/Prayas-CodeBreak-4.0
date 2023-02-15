#include<iostream>
float report_timing,duration,temp,start_timing;
int date;
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
    cout<<"\n\n1.Admin\t 2.Driver 3.Exit\n";
    int num;
    cin>>num;
    switch (num)
    {
        case 1:
            admin();
            break;
        case 2:
            driver();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout<<"Enter 1 or 2";
    }
}
void admin()
{
    cout<<"\n\n\tAdmin\n";
    int hub;
    cout<<"\nEnter Reporting Date: ";
    cin>>date;
    cout<<"Enter Reporting Time in 24 hours format: ";
    cin>>report_timing;
    cout<<"\nSelect Hub";
    cout<<"\n1.Banglore\n2.Mumbai\n3.Ahmedabad\n\n\n";
    cin>>hub;
    switch (hub)
    {
        case 1:
            cout<<"Select Starting Point";
            cout<<"\n1.Chennai\n2.Hyderabad\n3.Kochi\n4.Pune\n";
            int banglore;
            cin>>banglore;
            switch (banglore)
            {
                case 1:
                    duration = 7.0;
                    temp = report_timing - duration;
                    if(temp <= 0)
                    {
                        date =  date - 1;
                        start_timing = 24 + temp;
                    }
                    else
                    {
                        start_timing = temp;
                    }
                    cout<<"Start Date: "<<date;
                    cout<<"\nStart Timing: "<<start_timing<<endl;
                    break;
                case 2:
                    duration = 10;
                    temp = report_timing - duration;
                    if(temp <= 0)
                    {
                        date =  date - 1;
                        start_timing = 24 + temp;
                    }
                    else
                    {
                        start_timing = temp;
                    }
                    cout<<"Start Date: "<<date;
                    cout<<"\nStart Timing: "<<start_timing<<endl;
                    break;
                case 3:
                    duration = 11;
                    temp = report_timing - duration;
                    if(temp <= 0)
                    {
                        date =  date - 1;
                        start_timing = 24 + temp;
                    }
                    else
                    {
                        start_timing = temp;
                    }
                    cout<<"Start Date: "<<date;
                    cout<<"\nStart Timing: "<<start_timing<<endl;
                    break;
                case 4:
                    duration = 15;
                    temp = report_timing - duration;
                    if(temp <= 0)
                    {
                        date =  date - 1;
                        start_timing = 24 + temp;
                    }
                    else
                    {
                        start_timing = temp;
                    }
                    cout<<"Start Date: "<<date;
                    cout<<"\nStart Timing: "<<start_timing<<endl;
                    break;
            }
            break;
        case 2:
            cout<<"Select Starting Point";
            cout<<"\n1.Pune\n2.Nagpur\n3.Indore\n4.Panji";
            int mumbai;
            cin>>mumbai;
            switch (mumbai)
            {
                case 1:
                    duration = 4;
                    temp = report_timing - duration;
                    if(temp <= 0)
                    {
                        date =  date - 1;
                        start_timing = 24 + temp;
                    }
                    else
                    {
                        start_timing = temp;
                    }
                    cout<<"Start Date: "<<date;
                    cout<<"\nStart Timing: "<<start_timing<<endl;
                    break;
                case 2:
                    duration = 14;
                    temp = report_timing - duration;
                    if(temp <= 0)
                    {
                        date =  date - 1;
                        start_timing = 24 + temp;
                    }
                    else
                    {
                        start_timing = temp;
                    }
                    cout<<"Start Date: "<<date;
                    cout<<"\nStart Timing: "<<start_timing<<endl;
                    break;
                case 3:
                    duration = 11;
                    temp = report_timing - duration;
                    if(temp <= 0)
                    {
                        date =  date - 1;
                        start_timing = 24 + temp;
                    }
                    else
                    {
                        start_timing = temp;
                    }
                    cout<<"Start Date: "<<date;
                    cout<<"\nStart Timing: "<<start_timing<<endl;
                    break;
                case 4:
                    duration = 12;
                    temp = report_timing - duration;
                    if(temp <= 0)
                    {
                        date =  date - 1;
                        start_timing = 24 + temp;
                    }
                    else
                    {
                        start_timing = temp;
                    }
                    cout<<"Start Date: "<<date;
                    cout<<"\nStart Timing: "<<start_timing<<endl;
                    break;
            }
            break;
        /*case 3:
            cout<<"Select Starting Point";
            cout<<"\n1.Jaipur\n2.Indore\n3.Jodhpur\n4.Agra";
            int ahmedabad;
            cin>>ahmedabad;
            switch (ahmedabad)
            {
                case 1:
                    duration = ;
                    temp = report_timing - duration;
                    if(temp <= 0)
                    {
                        date =  date - 1;
                        start_timing = 24 + temp;
                    }
                    else
                    {
                        start_timing = temp;
                    }
                    cout<<"Start Date: "<<date;
                    cout<<"\nStart Timing: "<<start_timing<<endl;
                    break;
                case 2:
                    duration = ;
                    temp = report_timing - duration;
                    if(temp <= 0)
                    {
                        date =  date - 1;
                        start_timing = 24 + temp;
                    }
                    else
                    {
                        start_timing = temp;
                    }
                    cout<<"Start Date: "<<date;
                    cout<<"\nStart Timing: "<<start_timing<<endl;
                    break;
                case 3:
                    duration = ;
                    temp = report_timing - duration;
                    if(temp <= 0)
                    {
                        date =  date - 1;
                        start_timing = 24 + temp;
                    }
                    else
                    {
                        start_timing = temp;
                    }
                    cout<<"Start Date: "<<date;
                    cout<<"\nStart Timing: "<<start_timing<<endl;
                    break;
                case 4:
                     duration = ;
                    temp = report_timing - duration;
                    if(temp <= 0)
                    {
                        date =  date - 1;
                        start_timing = 24 + temp;
                    }
                    else
                    {
                        start_timing = temp;
                    }
                    cout<<"Start Date: "<<date;
                    cout<<"\nStart Timing: "<<start_timing<<endl;   
                    break;
            }
            break;*/
            defult:
                cout<<"Enter Valid Input";

    }
    start();
}

void driver()
{
    string prob;
    int n;
    if(temp <= 0)
    {
        date =  date - 1;
    }
    cout<<"\nReporting Time: "<<report_timing;
    cout<<"\nStarting Time: "<<start_timing;
    cout<<"\nStarting Date"<<date<<endl;
    cout<<"1. Report Emergency\n2. Arrived\n3. Nearest Rest Stop\n4. Chat with Admin\n5. Exit\n";
    cin>>n;
    switch (n)
    {
        case 1:
                cout<<"Explain the problem: ";
                cin>>prob;
                cout<<"\nOk, admin will be notified.\n";
                driver();
                break;
        case 2:
                cout<<"Admin will be notified\n";
                driver();
                break;
        case 3:
                cout<<"The nearest rest stop is at 72 Avenue GM Road\n";
                driver();
                break;
        case 4:
                cout<<"Enter message: ";
                cin>>prob;
                cout<<"\nAdmin will be notified.\n";
                driver();
                break;
                
        case 5:
                cout<<"Exiting...\n";
                break;
        default:
                break;
    }
    start();
}