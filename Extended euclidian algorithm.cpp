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
 /*
 given equation is aXg+bYg=gcd(a,b)
 g means g=gcd(a,b)
 s1=Xg and t1=Yg
 */
 int g=(s1*temp1)+(t1*temp2);
 cout<<"gcd of the of the number is:"<<g<<endl;







 return 0;
}
