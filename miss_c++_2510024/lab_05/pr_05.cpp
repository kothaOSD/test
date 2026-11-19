#include <iostream>

using namespace std;
# define SIZE 5
class mystack
{

char stc[SIZE];
int tos;
public:
mystack(){
    tos=0;
}
void push(char i){
    if (tos==SIZE )
    {
        cout<<"stack is full"<<endl;
        return;
    }
    stc[tos]=i;
    tos++;
}
char pop(){
    if (tos==0)
    {
        cout<<"stack is empty"<<endl;
        return 0;
    }
    tos--;
    return stc[tos];
}
};
int main()
{
    mystack s;
    s.push('a');
    s.push('c');
    s.push('d');
    s.push('h');
    for (int i = 0; i < 4; i++)
    {
        cout<< "pop "<<i+1<<" = "<<s.pop()<<endl;
    }
    
    return 0;
}