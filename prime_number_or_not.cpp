#include<iostream>
using namespace std;
int main()
{
   int n,i,count =0;
   cout<<"enter a number";
   cin>>n;
   if(n<=1)
   cout<<"not a prime";
   for (i=1;i<n;i++)
   {
   	if(n%i==0)
   	{
   		count ++;
   }
	   }
	   if (count==2)
	   {
	   	cout<<"prime";
	   }
	   	else
	   	cout<<"not a prime";
}


