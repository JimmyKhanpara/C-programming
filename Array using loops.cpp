#include<iostream>
using namespace std;

int main(){

    int marks[]={25, 45, 47, 36};

    int mathmarks[4];
    mathmarks[0]=27;
    mathmarks[1]=37;
    mathmarks[2]=24;
    mathmarks[3]=17;

    // Array using "for" loop
    cout<<"The marks of the students are:"<<endl;
    for (int a = 0; a < 4; a++)
    {
       cout<<"The marks of student no "<<a<<" is "<<marks[a]<<endl;
    }
    cout<<endl;

    cout<<"The Maths marks of the students are:"<<endl;
    for (int b = 0; b < 4; b++)
    {
       cout<<"The Math marks of student no "<<b<<" is "<<mathmarks[b]<<endl;
    }
    cout<<endl;

    // Array using "while" loop
    cout<<"The marks of the students are:"<<endl;
    int c = 0;
    while(c<4)
    {
        cout<<"The marks student no "<<c<<" is "<<marks[c]<<endl;
        c++;
    }
    cout<<endl;

    cout<<"The Maths marks of the students are:"<<endl;
    int d = 0;
    while(d<4)
    {
        cout<<"The Math marks of student no "<<d<<" is "<<mathmarks[d]<<endl;
        d++;
    }
    cout<<endl;

    //Array using "do-while" loop
    cout<<"The marks of the students are:"<<endl;
    int e = 0;
    do
    {
        cout<<"The marks student no "<<e<<" is "<<marks[e]<<endl;
        e++;
    } 
    while(e<4);
    cout<<endl;

    cout<<"The marks of the students are:"<<endl;
    int f = 0;
    do
    {
        cout<<"The Math marks student no "<<f<<" is "<<marks[f]<<endl;
        f++;
    } 
    while(f<4);
    cout<<endl;

    return 0;
}
