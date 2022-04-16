/*Airline registration system*/

#include<iostream>   // for i/o operations 
#include<fstream>   //for file handling operations 
#include<iomanip>  //for floating point values 

using namespace std;

void mainMenu();

class Management
{ 
    public:

    Management ()
    {
        mainMenu();
    }

};

class details
{
    public:
        static string name,gender;
        int phoneNo;
        int age;
        string address;
        static int cId;
        char arr[100];
        void information()
        {
            cout<<"\tEnter the customer id:"<<endl;
            cin>>cId;
            cout<<"Please Enter your name:"<<endl;
            cin>>name;
            cout<<"\tEnter the age:"<<endl;
            cin>>age;
            cout<<"\tAddress:"<<endl;
            cin>>address;
            cout<<"\tGender:"<<endl;
            cin>>gender;
            cout<<"Your details are saved with us\n";

        }

};

int details::cId;
string details::name;
string details::gender;

class registration
{
    public:

    static int choice;
    int choice1;
    int back;
    static float charges;
    void flights()
    {
        string flightN[]={"Dubai","Canada","UK","Australia"};

        for(int a=0;a<4;a++)
        {
            cout<<(a+1)<<".Flight to"<<flightN[a]<<endl;
        }
            cout<<"\t\t\t_____________________Welcome to the Nikhil Airlines______________________"<<endl;
            cout<<"Press the country number towhich you want to book the flight"<<endl;
            cin>>choice;
            switch(choice)
            {
                case 1:
                {
                    cout<<"\t\t\tWelcome to the Dubai Emirates\t\t\t"<<endl;
                    cout<<"your comfort is our priority, Enjoy the journey!!"<<endl;
                    cout<<"Following are the flights\t\t\t"<<endl;
                    cout<<"DB-498";
                    cout<<"\t\tDate-04-04-2022---Duration-10 hrs----Price-1400$"<<endl;
                    cout<<"DB-448";
                    cout<<"\t\tDate-05-04-2022---Duration-10 hrs----Price-1200$"<<endl;
                    cout<<"DB-418";
                    cout<<"\t\tDate-06-04-2022---Duration-10 hrs----Price-800$"<<endl;

                    cout<<"\t\t\tSeect the flight you want to book"<<endl;
                    cin>>choice1;

                    if(choice1==1)
                    {   
                        charges=1400;
                        cout<<"Congratulations you have successfully booked the DB-498"<<endl;
                        cout<<"you can go back to the menu and take the ticket"<<endl;
                        
                    }
                    else if(choice1==2)
                    {   
                        charges=1200;
                        cout<<"Congratulations you have successfully booked the DB-448"<<endl;
                        cout<<"you can go back to the menu and take the ticket"<<endl;
                        
                    }
                    else if(choice1==3)
                    {   
                        charges=800;
                        cout<<"Congratulations you have successfully booked the DB-418"<<endl;
                        cout<<"you can go back to the menu and take the ticket"<<endl;
                        
                    }
                    else 
                    {   
                        cout<<"INVALID TICKET!!"<<endl;
                        cout<<"Shifting to the previous menu"<<endl;
                        flights();

                    }

                    cout<<"Press any key to go back to the main menu"<<endl;
                    cin>>back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else 
                    {
                    mainMenu();
                    }
                 break;

                }

                case 2:
                {
                    cout<<"\t\t\tWelcome to the Canada Airlines\t\t\t"<<endl;
                    cout<<"your comfort is our priority, Enjoy the journey!!"<<endl;
                    cout<<"Following are the flights\t\t\t"<<endl;
                    cout<<"CN-498";
                    cout<<"\t\tDate-04-04-2022---Duration-21 hrs----Price-2400$"<<endl;
                    cout<<"CN-448";
                    cout<<"\t\tDate-05-04-2022---Duration-21 hrs----Price-2200$"<<endl;
                    cout<<"CN-418";
                    cout<<"\t\tDate-06-04-2022---Duration-21 hrs----Price-1800$"<<endl;

                    cout<<"\t\t\tSeect the flight you want to book"<<endl;
                    cin>>choice1;

                    if(choice1==1)
                    {   
                        charges=2400;
                        cout<<"Congratulations you have successfully booked the CN-498"<<endl;
                        cout<<"you can go back to the menu and take the ticket"<<endl;
                        
                    }
                    else if(choice1==2)
                    {   
                        charges=2200;
                        cout<<"Congratulations you have successfully booked the CN-448"<<endl;
                        cout<<"you can go back to the menu and take the ticket"<<endl;
                        
                    }
                    else if(choice1==3)
                    {   
                        charges=1800;
                        cout<<"Congratulations you have successfully booked the CN-418"<<endl;
                        cout<<"you can go back to the menu and take the ticket"<<endl;
                        
                    }
                    else 
                    {   
                        cout<<"INVALID TICKET!!"<<endl;
                        cout<<"Shifting to the previous menu"<<endl;
                        flights();

                    }

                    cout<<"Press any key to go back to the main menu"<<endl;
                    cin>>back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else 
                    {
                    mainMenu();
                    }
                   break;

                }
                case 3:
                {
                    cout<<"\t\t\tWelcome to the UK Airlines\t\t\t"<<endl;
                    cout<<"your comfort is our priority, Enjoy the journey!!"<<endl;
                    cout<<"Following are the flights\t\t\t"<<endl;
                    cout<<"UK-498";
                    cout<<"\t\tDate-04-04-2022---Duration-10 hrs----Price-1400$"<<endl;
                    cout<<"UK-448";
                    cout<<"\t\tDate-05-04-2022---Duration-10 hrs----Price-1200$"<<endl;
                    cout<<"UK-418";
                    cout<<"\t\tDate-06-04-2022---Duration-10 hrs----Price-800$"<<endl;

                    cout<<"\t\t\tSeect the flight you want to book"<<endl;
                    cin>>choice1;

                    if(choice1==1)
                    {   
                        charges=1400;
                        cout<<"Congratulations you have successfully booked the UK-498"<<endl;
                        cout<<"you can go back to the menu and take the ticket"<<endl;
                        
                    }
                    else if(choice1==2)
                    {   
                        charges=1200;
                        cout<<"Congratulations you have successfully booked the UK-448"<<endl;
                        cout<<"you can go back to the menu and take the ticket"<<endl;
                        
                    }
                    else if(choice1==3)
                    {   
                        charges=800;
                        cout<<"Congratulations you have successfully booked the UK-418"<<endl;
                        cout<<"you can go back to the menu and take the ticket"<<endl;
                        
                    }
                    else 
                    {   
                        cout<<"INVALID TICKET!!"<<endl;
                        cout<<"Shifting to the previous menu"<<endl;
                        flights();

                    }

                    cout<<"Press any key to go back to the main menu"<<endl;
                    cin>>back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else 
                    {
                    mainMenu();
                    }
            
                 break;
                }
                case 4:
                {
                    cout<<"\t\t\tWelcome to the Quantas Airlines\t\t\t"<<endl;
                    cout<<"your comfort is our priority, Enjoy the journey!!"<<endl;
                    cout<<"Following are the flights\t\t\t"<<endl;
                    cout<<"AUS-498";
                    cout<<"\t\tDate-04-04-2022---Duration-10 hrs----Price-1400$"<<endl;
                    cout<<"AUS-448";
                    cout<<"\t\tDate-05-04-2022---Duration-10 hrs----Price-1200$"<<endl;
                    cout<<"AUS-418";
                    cout<<"\t\tDate-06-04-2022---Duration-10 hrs----Price-800$"<<endl;

                    cout<<"\t\t\tSeect the flight you want to book"<<endl;
                    cin>>choice1;

                    if(choice1==1)
                    {   
                        charges=1400;
                        cout<<"Congratulations you have successfully booked the AUS-498"<<endl;
                        cout<<"you can go back to the menu and take the ticket"<<endl;
                        
                    }
                    else if(choice1==2)
                    {   
                        charges=1200;
                        cout<<"Congratulations you have successfully booked the AUS-448"<<endl;
                        cout<<"you can go back to the menu and take the ticket"<<endl;
                        
                    }
                    else if(choice1==3)
                    {   
                        charges=800;
                        cout<<"Congratulations you have successfully booked the AUS-418"<<endl;
                        cout<<"you can go back to the menu and take the ticket"<<endl;
                        
                    }
                    else 
                    {   
                        cout<<"INVALID TICKET!!"<<endl;
                        cout<<"Shifting to the previous menu"<<endl;
                        flights();

                    }

                    cout<<"Press any key to go back to the main menu"<<endl;
                    cin>>back;
                    if(back==1)
                    {
                        mainMenu();
                    }
                    else 
                    {
                    mainMenu();
                    }
            
                 break;
                }


                default:
                {
                    cout<<"Invalid selection,shifting you to the main menu"<<endl;
                    mainMenu();
                    break;
                }



            }
        
    }

};


float registration::charges;
int registration::choice;

class ticket: public registration,details
{
 
 public:
 void bill()
 {
     string destination="";
     ofstream outf("records.txt");
     {
         outf<<"_________________Nikhil Airlines____________________"<<endl;
         outf<<"_________________Ticket____________________"<<endl;
         outf<<"customerId :"<<details::cId<<endl;
         outf<<"Name :"<<details::name<<endl;
         outf<<"Gender :"<<details::gender<<endl;

         outf<<"\t\tDescription"<<endl;

         if(registration::choice==1)
         {
             destination="Dubai";
         }
         else if(registration::choice==2)
         {
             destination="Canada";
         }
         else if(registration::choice==3)
         {
             destination="UK";
         }
         else if (registration::choice==4)
         {
             destination="Australia";
         }

         outf<<"Destination is\t\t\t"<<destination<<endl;
         outf<<"Flight cost:\t\t\t"<<registration::charges<<endl;

     }
     outf.close();
 }

 void display()
 {
     ifstream ifs("records.txt");
     {
         if(!ifs)
         {
             cout<<"File error!";
         }
         while(!ifs.eof())
         {
             ifs.getline(arr,100);
             cout<<arr<<endl;

         }
     }
     ifs.close();
     
 }
};




void mainMenu()
{
    int lchoice;
    int back;

    cout<<"\t **//// Nikhil Airlines/////**\n"<<endl;
    cout<<"\t __________Main menu____________"<<endl;
    cout<<"_______________________________________________\t"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
    cout<<"\t|\t\t\t\t\t\tPress 1 to add the customer details\t|\t\t\t\t\t\t"<<endl;
    cout<<"\t|\t\t\t\t\t\tPress 2 for flight registration\t\t|\t\t\t\t\t\t"<<endl;
    cout<<"\t|\t\t\t\t\t\tPress 3 for ticket and charges\t\t|\t\t\t\t\t\t"<<endl;
    cout<<"\t|\t\t\t\t\t\tPress 4 to exit\t\t\t\t\t\t|\t\t\t\t\t\t"<<endl;
    cout<<"________________________________________________________________________\t"<<endl;
    cout<<"Enter the choice:"<<endl;
    
    cin>>lchoice;

    details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
        {
            cout<<"________________Customers______________________________"<<endl;
            d.information();
            cout<<"press any key to go back"<<endl;
            cin>>back;
            if(back==1)
            {
              mainMenu();
            }
            else 
            {
              mainMenu();
            }
            break;
        }
        case 2:
        {
            cout<<"________________Book a flight using this sytem_____________________"<<endl;
            r.flights();
            cout<<"Print any key to go back"<<endl;
            break;
        }
        case 3:
        {
            cout<<"________________Get your Ticket_____________________\n"<<endl;
            t.bill();
            cout<<"Your ticket is printed you can take it back"<<endl;
            cout<<"Print 1 to display your ticket"<<endl;

            cin>>back;
            if(back==1)
            {
            t.display();
            cout<<"press any key to go back"<<endl;
            cin>>back;
            if(back==1)
            {
              mainMenu();
            }
            else 
            {
              mainMenu();
            }

            }
            else 
            {
                mainMenu();
            }
            break;
        }

        case 4:
        {
            cout<<"\n\n\t\t______Thank you for the visit_______\t\t\n\n"<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid Input-Please try again!"<<endl;
            mainMenu();
            break;
        }

    }
}

int main()
{
Management Mobj;
return 0;
}