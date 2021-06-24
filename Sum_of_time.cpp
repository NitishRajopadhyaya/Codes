#include<iostream>
using namespace std;
 class Time
 {
     private:
        int hours , seconds , minutes,n=0;
        int total_hours , total_seconds , total_minutes;
     public:
          void inputdata()
          {
              cout<<"Enter given hour :"<<endl;
              cin>>hours;

              cout<<"Enter given minutes :"<<endl;
              cin>>minutes;

              cout<<"Enter given seconds :"<<endl;
              cin>>seconds;

          }   

          void displaydata()
          {
              cout<<" Total Time is :"<<endl;
               
              cout<<total_hours<<" hours : "<<total_minutes<<" minutes : "<<total_seconds<<" seconds"<<endl; 
          }

          int Add_time( Time t1 ,Time t2)
          {
              total_hours= t1.hours + t2.hours; 

              total_minutes= t1.minutes + t2.minutes;

                    if(total_minutes>=60)
                    {
                        total_hours++;
                        total_minutes=total_minutes-60;
                    }

              total_seconds= t1.seconds + t2.seconds;
               
                 if(total_seconds>=60)
                  {
                      total_minutes++;
                       total_seconds=total_seconds-60;

                            if(total_minutes>=60)
                                {
                                    total_hours++;
                                    total_minutes=total_minutes-60;
                                }

                  }

                return 0;
            }
          


 };

 int main()
 {
     Time time_1,time_2,time_total;

     cout<<"Enter First time"<<endl;
     time_1.inputdata();

     cout<<"Enter second time"<<endl;
     time_2.inputdata();

     time_total.Add_time(time_1,time_2);
     time_total.displaydata();
     
 }