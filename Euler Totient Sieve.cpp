#include<bits/stdc++.h>
using namespace std;
#define n 100
int main()
{
int totient[n + 1];
for (int i = 1; i <= n; ++i) totient[i] = i;
for (int i = 2; i <= n; ++i)
 if (totient[i] == i)
  for (int j = i; j <= n; j += i)
   totient[j] -= totient[j] / i;

    cout<<totient[9]<<endl;


 return 0;
}
