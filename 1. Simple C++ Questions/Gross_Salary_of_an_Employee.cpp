//Gross Salary = Basic Salary + HRA + DA + Other Allowances
#include <iostream>
using namespace std;
int main(){
    float BasicSalary, HRA,Da,Allowanace=0;
    cout<<"Enter the Basic Salary: ";
    cin>>BasicSalary;
    cout<<"Enter the HRA: ";
    cin>>HRA;
    cout<<"Enter the DA: ";
    cin>>Da;
    cout<<"Enter the Allowances: ";
    cin>>Allowanace;
    float Gross_Salary= BasicSalary + HRA + Da + Allowanace;
    cout<<"Your Gross Salary is: "<<Gross_Salary;
    return 0;
}