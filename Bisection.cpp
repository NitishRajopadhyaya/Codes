#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

float CalcFunc(float X)
{
	float cube,sq;
	cube= pow(sin(X),3);
	sq=pow(sin(X),2);
	
	return(cube-sq-1);
    
}

  void Bisection(float I1 , float I2)
  {
      
      double c,e;
       cout<<"Enter Error"<<endl;
       cin>>e;
      do
      {
         c=(I1+I2)/2;

           if((CalcFunc(c)*CalcFunc(I1)) >0)
              I1=c;
           else
               I2=c;   

       }while(abs(CalcFunc(c))>e || abs(I2-I1)>e);

       cout<<"Solution is \t"<<c;
       cout<<"Function value \t"<<CalcFunc(c);
  }

void CheckFunc( float I1 , float I2)
{
   if((CalcFunc(I1) * CalcFunc(I2)) >0)
       cout<<"Error";

   else if((CalcFunc(I1) * CalcFunc(I2))==0)
       {
           if(CalcFunc(I1)==0)
               cout<<"Solution is \t"<<I1<<endl;

           if(CalcFunc(I2)==0)
               cout<<"Solutio is \t"<<I2<<endl;    
       }

    else
         Bisection(I1,I2);         
}

int main()
{
    float I1,I2;

    cout<<"Enter Interval 1 "<<endl;
    cin>>I1;

    cout<<"Enter Interval 2 "<<endl;
    cin>>I2;

    CheckFunc(I1,I2); 
}
