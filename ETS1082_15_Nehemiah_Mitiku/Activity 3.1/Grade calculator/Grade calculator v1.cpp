#include <iostream>

using namespace std;

int main()
{
    float mark;
    cout << "Enter your mark point: ";
    cin>>mark;

    if(mark >= 90 && mark <= 100){
        cout<<"Your Grade mark is: A+ "<<endl;
    }
    else if(mark >= 80 && mark < 90){
        cout<<"Your Grade mark is: A "<<endl;
    }

    else if(mark >= 75 && mark < 80){
        cout<<"Your Grade mark is: B+ "<<endl;
    }
    else if(mark >= 60 && mark < 75){
        cout<<"Your Grade mark is: B "<<endl;
    }
    else if(mark >= 55 && mark < 60){
        cout<<"Your Grade mark is: C+ "<<endl;
    }
    else if(mark >= 45 && mark < 55){
        cout<<"Your Grade mark is: C "<<endl;
    }
    else if(mark >= 30 && mark < 45){
        cout<<"Your Grade mark is: D "<<endl;
    }
    else if(mark >= 0 && mark < 30) {
        cout<<"Your Grade mark is: F "<<endl;
    }
    else{
        cout<<"You have entered a wrong mark point!"<<endl;
    }

    return 0;
}

