#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
     cout<<"Enter  Number of Elements of Array :"<<endl;
     cin>>n;
     int arr[n];
       cout<<"Enter Elements of Array :"<<endl;
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
             sum=sum+arr[i];
         }

         cout<<"Sum of Entered Elements is : \t"<<sum;
}
