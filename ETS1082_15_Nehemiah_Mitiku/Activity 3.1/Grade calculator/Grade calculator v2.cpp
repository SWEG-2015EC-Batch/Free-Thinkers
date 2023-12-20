#include <iostream>

using namespace std;

int main()
{
    float test, quiz, assignment, project, final_exam;
    float total_mark;

    cout << "Enter your test mark(15%): ";
    cin >> test;
    cout << "Enter your quiz mark(5%): ";
    cin >> quiz;
    cout << "Enter your project mark(20%): ";
    cin >> project;
    cout << "Enter your assignment mark(10%): ";
    cin >> assignment;
    cout << "Enter your final exam mark(50%): ";
    cin >> final_exam;

    total_mark = test + quiz + assignment + project + final_exam;

    if(test>=0&&test<=15&&quiz>=0&&quiz<=5&&project>=0&&project<=20&&assignment>=0&&assignment<=10&&final_exam>=0&&final_exam<=50) {
        if(total_mark>=0&&total_mark<=100){
            cout<< "Your Total Mark is: " << total_mark <<endl;
        }
        if(total_mark>=90){
            cout<<"Your Grade mark is: A+ "<<endl;
        }
        else if(total_mark>=80&&total_mark<90){
            cout<<"Your Grade mark is: A "<<endl;
        }
        else if(total_mark>=75&&total_mark<80){
            cout<<"Your Grade mark is: B+ "<<endl;
        }
        else if(total_mark>=60&&total_mark<75){
            cout<<"Your Grade mark is: B "<<endl;
        }
        else if(total_mark>=55&&total_mark<60){
            cout<<"Your Grade mark is: C+ "<<endl;
        }
        else if(total_mark>=45&&total_mark<55){
            cout<<"Your Grade mark is: C "<<endl;
        }
        else if(total_mark>=30&&total_mark<45){
            cout<<"Your Grade mark is: D "<<endl;
        }
        else{
            cout<<"Your Grade mark is: F "<<endl;
        }
    }else {
        cout<<"You have entered excess mark point!"<<endl;
    }

    return 0;
}
