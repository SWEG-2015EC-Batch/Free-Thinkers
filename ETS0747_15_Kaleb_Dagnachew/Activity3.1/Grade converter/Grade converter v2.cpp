#include <iostream>

using namespace std;

int main()
{
float Test,Assignment,Project,Final_exam,Quiz;
float Total_mark;

cout << "PLEASE ENTER YOUR MARK POINT CORRECTLY!!!\n" << endl;

cout<<"Enter the test mark(15%): ";
cin>>Test;

cout<<"Enter the quiz mark(5%): ";
cin>>Quiz;

cout<<"Enter the project mark(20%): ";
cin>>Project;

cout<<"Enter the assignment mark(10%): ";
cin>>Assignment;

cout<<"Enter the final exam mark: ";
cin>>Final_exam;

Total_mark=(Test+Assignment+Project+Final_exam+Quiz);

if(Total_mark>=0&&Total_mark<=100){
cout<< "Your Total Mark is: " << Total_mark <<endl;
}
if(Test>=0&&Test<=15&&Quiz>=0&&Quiz<=5&&Project>=0&&Project<=20&&Assignment>=0&&Assignment<=10&&Final_exam>=0&&Final_exam<=50) {
    if(Total_mark>=90){
        cout<<"your Grade mark is: A+ "<<endl;
    }
    else if(Total_mark>=80&&Total_mark<90){
        cout<<"your Grade mark is: A "<<endl;
    }

    else if(Total_mark>=75&&Total_mark<80){
        cout<<"your Grade mark is: B+ "<<endl;
    }
    else if(Total_mark>=60&&Total_mark<75){
        cout<<"your Grade mark is: B "<<endl;
    }
    else if(Total_mark>=55&&Total_mark<60){
        cout<<"your Grade mark is: C+ "<<endl;
    }
    else if(Total_mark>=45&&Total_mark<55){
        cout<<"your Grade mark is: C "<<endl;
    }
    else if(Total_mark>=30&&Total_mark<45){
        cout<<"your Grade mark is: D "<<endl;
    }
    else{
        cout<<"your Grade mark is: F "<<endl;
    }
} else {
    cout<<"you have entered excess mark point!!!"<<endl;
    }

    return 0;
}

