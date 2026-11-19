#include <iostream>

using namespace std;
class stdnt
{
    string name;
    // int total_mark;
    // float avg_mark;
    int s1,s2,s3;

    public:
    stdnt(string n1)
    {
        name=n1;
        // total_mark=m1;
        // avg_mark=a_m1;
    }
void getdata()
{
    cout<<"enter your marks of 3 subjects"<<endl;
    cin>>s1>>s2>>s3;

}
int tota_l()

{
    int total=s1+s2+s3;
    return total;
}   
float aveg()
{
int c=tota_l();
    float avg=(float)c/3;
    return avg;
}
    void std_info()
    {
        cout<<"-----student info-----"<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"total mark :"<<tota_l()<<endl;
        cout<<"average mark :"<< aveg()<<endl;

    }
};

class teacher
{
string name,dept;
int no_of_courses,weekly_class;
public:
    teacher(string n2,string d,int c)
    {
        name=n2;
    dept=d;
    no_of_courses=c;
    }
    // int setdata()
    // {
    //     cout<<"enter your no of courses"<<endl;
    //     cin>>no_of_courses;
    //     return no_of_courses;
    // }
    int wkl_cls()
    {
        return no_of_courses*3;
    }
    void teacher_info()
    {
        cout<<"-----teacher info-----"<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"dept :"<<dept<<endl;
        cout<<"no of courses :"<<no_of_courses<<endl;
        cout<<"weekly classes :"<<wkl_cls()<<endl;

    }

};
int main()
{

    stdnt r("kotha");
r.getdata();
// r.tota_l();
// r.aveg();
r.std_info();

teacher t("anika","ECE",5);
t.teacher_info();
    return 0;
}