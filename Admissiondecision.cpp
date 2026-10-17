# include<iostream>
using namespace std;

int main(){
    string studentName;
    int age;
    double score;

    cout<<"Enter student name:"<<endl;
    cin<<studentName;

    cout<<"Enter age:"<<endl;
    cin<<age;

    cout<<"Enter exam score:"<<endl;
    cin<<score;

    if(age>=18)
    {
        if(score>=50)
        cout<<"Decision:Admitted"<<endl;
    }
    else
    {
        cout<<"Decision:Not Admitted:Low Score"<<endl;
    }
    else
    {
        cout<<"Decision:Not Admitted:Underage"<<endl;
    }

    return 0;
}
