#include<iostream>
#include<ctype.h>

using namespace std;

int main()
{ 
   char W;
   //W is is any charcter entered
     cout<<"enter W"<<endl;
     cin>>W;
     if(islower(W)) cout<<"its uppercase is "<<(char)toupper(W)<<endl;
     else if(isupper(W)) cout<<"its lowercase is "<<(char)tolower(W)<<endl;
	 else cout<<"error"<<endl;
	 
	 return 0;
	 
}
