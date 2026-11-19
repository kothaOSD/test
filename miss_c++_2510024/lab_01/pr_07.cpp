#include <iostream>

using namespace std;

class me
{
public:
    int ct[4];
    float avg(int ct1[4] );
};

float me::avg(int ct1[4] )
{
 int sum=0;
 for (int i = 0; i <4; i++)
 {
    
     sum=sum+ct1[i];
 }
 float avg = (float)sum/4;
 return avg;
}

int main()
{
    me n;
    cout<<"enter your ct marks"<<endl;
for (int i = 0; i <4; i++)
{
    cin>>n.ct[i];
    n.avg(n.ct);
}

cout<<"average = "<<n.avg(n.ct)<<endl;
    return 0;
}