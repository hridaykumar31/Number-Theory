#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c;
 int s1=1,s2=0,t1=0,t2=1,s,t;
 cin>>a>>b>>c;
 int temp1=a;
 int temp2=b;
 while(b!=0)
 {
     int q=a/b;
     int rem=a%b;
     a=b;
     b=rem;
     s=s1-(s2*q);
     t=t1-(t2*q);
     s1=s2;
     s2=s;
     t1=t2;
     t2=t;
 }
 //g means g=gcd(a,b)
 int g=(s1*temp1)+(t1*temp2);
 cout<<"gcd of the of the number is:"<<g<<endl;
 if(c%g!=0)
 {
   cout<<"there is no solution exist!"<<endl;
 }
 else
 {
   ///x and y is the first solution of the given equation
   int x=s1*(c/g);
   int y=t1*(c/g);
   cout<<"first solution of the given equation is:"<<x<<" "<<y<<endl;
   cout<<"others solution for every k is:"<<endl;
   /* where k is {1,2,3,.........k}*/
   for(int k=1;k<=100;k++)
   {
       int x1=x+k*(temp2/g);
       int y1=y-k*(temp1/g);
       cout<<x1<<" "<<y1<<endl;
   }

 }







 return 0;
}

