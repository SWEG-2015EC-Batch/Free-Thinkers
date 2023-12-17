#include <iostream>

using namespace std;

int main()
{
float Mark;

cout << "PLEASE ENTER YOUR MARK POINT CORRECTLY!!!\n" << endl;
cin>>Mark;

    if(Mark>=90){
        cout<<"your Grade mark is: A+ "<<endl;
    }
    else if(Mark>=80&&Mark<90){
        cout<<"your Grade mark is: A "<<endl;
    }

    else if(Mark>=75&&Mark<80){
        cout<<"your Grade mark is: B+ "<<endl;
    }
    else if(Mark>=60&&Mark<75){
        cout<<"your Grade mark is: B "<<endl;
    }
    else if(Mark>=55&&Mark<60){
        cout<<"your Grade mark is: C+ "<<endl;
    }
    else if(Mark>=45&&Mark<55){
        cout<<"your Grade mark is: C "<<endl;
    }
    else if(Mark>=30&&Mark<45){
        cout<<"your Grade mark is: D "<<endl;
    }
    else if(Mark<0||Mark>100) {
    cout<<"you have entered Wrong mark point!!!"<<endl;
    }
    else{
        cout<<"your Grade mark is: F "<<endl;
    }


    return 0;
}

