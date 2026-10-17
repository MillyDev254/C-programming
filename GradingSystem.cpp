#include<iostream>
using namespace std;

int main()
{
    string studentName;
    int marks;
    char grade;

    cout<<"Enter studentName:"<<endl;
    cin<<studentName;

    cout<<"Enter exam marks:"<<endl;
    cin<<marks;

    if (marks>=70&& marrks<=100){
    grade="A"
    }

    else if(marks>=60&& marks<=69){
        grade="B"
    }
    else if(marks>=50&& marks<=59){
        grade="C"
    }
    else if(marks>=40&& marks<=49){
        grade="D"
    }
    else grade="E"

    cout<<"student Name:"<<studentName<<endl;
    cout<<"Marks:"<<marks<<endl;
    cout<<"Grade:"<<grade<<endl;

    return 0;
}
