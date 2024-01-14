#include <iostream>
using namespace std;
int main(){ 
    int first[3][4];
    int second[3][4];
    int result[3][4];
    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            cout<<"enter the "<<i+1<<" row and the "<<j+1<<" column number of the first data: ";
            cin>>first[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            cout<<"enter the "<<i+1<<" row and the "<<j+1<<" column number of the second data: ";
            cin>>second[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
           result[i][j]=first[i][j]+second[i][j];
    }
    }
     for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            cout<<result[i][j]<<"\t";
      } 
      cout<<"\n";
     }

return 0;
}
