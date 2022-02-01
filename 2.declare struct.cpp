#include<iostream>
using namespace std;
struct college_info
{
    char college_name[15];
    char college_code[2];
    char dept[50];
    int intake;
};
int main()
{
    struct college_info college;
    
    cout<<"\n---------enter the college information---------\n\n";
    cout<<"name of the college:";
    cin>>college.college_name;
    cout<<"college code:";
    cin>>college.college_code;
    cout<<"depertment:";
    cin>>college.dept;
    cout<<"department in-take:";
    cin>>college.intake;
    
    cout<<"\n\n*********college information*********\n\n";
    cout<<"name of the college:"<<college.college_name;
    cout<<"\n college university code:"<<college.college_code;
    cout<<"\n name of the department:"<<college.dept;
    cout<<"\n the department of"<<college.dept<<"has in_taken"<<college.intake;
    
    return 0;
}
