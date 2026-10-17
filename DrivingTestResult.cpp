#include<iostream>
using namespace std;
int main()
{
    string studentName
    double theoryMarks,practicalMarks,averageScore;

    cout<<"Enter studentName:";
    cin>>studentName;

    cout<<"Enter theoryMarks:";
    cin>>theoryMarks;

    cout>>"Enter practicalMarks:";
    cin>>practicalMarks;

    averageScore=(theoryMarks+practicalMarks)/2;

    cout<<"DRIVING TEST RESULT:"<<endl;
    cout<<"studentName:"<<studentName<<endl;
    cout<<"Theory marks:"<<theoryMarks<<endl;
    cout<<"Practical marks:"<<practicalMarks<<endl;
    cout<<"Avarage score:"<<avarageScore<<endl;

    if (avarageScore>=50)
    cout<<"Result:PASSED"<<endl;
    else
    cout<<"Result:FAILED"<<endl;
    
    return 0;
}



  