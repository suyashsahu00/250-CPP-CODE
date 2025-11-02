#include <iostream>

using namespace std;
int main(){
    char Fname[20],Mname[20],Lname[20];
    cout<<"Enter the first name , middle name and last name"<<endl;
    cin>>Fname>>Mname>>Lname;
    cout<<"Abbreviated name: "<<Fname[0]<<"."<<Mname[0]<<"."<<Lname<<endl;
    return 0;
}
