/*www.DailyFreeCode.comDownload Projects, Sourcecodes, Tips and Tricks, Interview FAQs, Hotlinks and more....Logon to www.DailyFreeCode.com*//*A criket team has the following table of batting figures for aseries of test matches:-----------------------------------------------------------------    Player's Name        Runs        Innings        Times not out-----------------------------------------------------------------    venkat                632            15                0   prasanna                514            14                3   Gavaskar                675            17                2       .                     .                 .                .      .                     .                 .                .------------------------------------------------------------------Write a program to read the figures set out in the above form, to calculatethe batting averages and to print out the complete table including the averages.*/

#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
void line();
void star();

int runs,innings;
float avg;
cout<<"\nEnter 5 records including following details\n";
cout<<"1)    Player's Name\n";
cout<<"2)    Runs\n";
cout<<"3)    Innings\n";
cout<<"4)     Times Not out\n\n";

struct cricketer
{
char name[15];
int runs;
int innings;
int tno;
float avg;
}rec[5];

for(int i=0;i<5;i++)
{
cout<<"\nEnter Player Name:-";
cin>>rec[i].name;
cout<<"Enter Runs:-";
cin>>rec[i].runs;
cout<<"Enter Innings:-";
cin>>rec[i].innings;
cout<<"Enter Time not out:-";
cin>>rec[i].tno;
rec[i].avg = float(rec[i].runs)/rec[i].innings;
}


clrscr();
cout<<"\n\n\n";
cout<<setw(49)<<"CRICKETER'S  TABLE\n";
line();
cout<<setw(15)<<"Player's Name"<<setw(15)<<"Runs"<<setw(15)<<"Innings"
     <<setw(20)<<"Times not out"<<setw(12)<<"Average\n";
line();
for(int i=0;i<5;i++)
{
cout<<setw(15)<<rec[i].name<<setw(15)<<rec[i].runs<<setw(12)<<rec[i].innings
     <<setw(18)<<rec[i].tno<<setw(16)<<rec[i].avg<<endl;
}
line();
cout<<endl<<endl<<endl;
star();
cout<<setw(43)<<"Finish\n";
star();

}



//======================line=====================\\void line()
    {
            for(int i=1;i<41;i++)
          cout<<"--";

     cout<<"\n";
   }



//======================star======================\\void star()
    {
            for(int i=1;i<41;i++)
          cout<<"**";

     cout<<"\n";
   }
