#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class Bank{
    char name[100],address[100],type;
    int balance;
    public:
    void Open_Account();
    void Deposit_Money();
    void Withdraw_Money();
    void Display_Account();


};
void Bank::Open_Account(){
    cout<<"  Enter Your full name  :: ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"  Enter Your Address :: ";
    cin.ignore();
    cin.getline(address,100);
    cout<<"  What type of Account do you want to open :: "<<endl;
    cout<<"  For current Press C"<<endl;
    cout<<"  For Saving Press S "<<endl;
    cin>>type;
    cout<<"  Enter the Amount For Deposit :: ";
    cin>>balance;
    cout<<" Congratulations!  Your Account has been Created "<<endl;
}
void Bank:: Deposit_Money(){
      int a;
      cout<<" Enter how much you Deposited :: ";
      cin>>a;
      balance+=a;
      cout<<" Your Current Balance is :: \t"<<balance;
}
void Bank::Display_Account(){
    cout<<"  Your full name ::"<<name<<endl;
    cout<<"  Your Address  ::"<<address<<endl;
    cout<<"  Type of Account you have open ::"<<type<<endl;
    cout<<"  Your Current balance is ::"<<balance<<endl;
}
void Bank :: Withdraw_Money(){
    float amount;
    // cout<<"\n Withdraw :: ";
    cout<<" Enter Amount to Withdraw :: ";
    cin>>amount;
    balance-=amount;
    cout<<" Total amount left ::"<< balance<<endl;
}
int main(){
    
    int  ch;
    char x;
    Bank obj;
    do{

    cout<<"--------------------------------------------------"<<endl;
    cout<<"           Welcome To The Bank     "<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"  1) Open Your Account   "<<endl;
    cout<<"  2) Deposit Money       "<<endl;
    cout<<"  3) Withdraw Money      "<<endl;
    cout<<"  4) Display Account     "<<endl;
    cout<<"  5) Exit                "<<endl;
     cout<<"--------------------------------------------------"<<endl;
    cout<<"  Select the options From Above "<<endl;
    cin>>ch;
    switch(ch){
        case 1:
           cout<<" 1) Open  Your Account "<<endl;
           obj.Open_Account();
           break;
        case 2:
            cout<<" 2) Deposit Money "<<endl;
            obj.Deposit_Money();
            break;
        case 3:
             cout<<" 3)  Withdraw Money "<<endl;
             obj.Withdraw_Money()  ;
             break;
        case 4:
             cout<<" 4) Display Account"  <<endl;
             obj.Display_Account()  ;
             break; 
        case 5:
             if(ch==5) {
                 exit(1);
             }   
             default:
             cout<< "This is not exist Try Again! "<<endl;
             }
             cout<<endl<<" Do you want to select other options Press :: y"<<endl;
             cout<<" If you want to exit Press :: N "<<endl;
             x=getch();
             if(x=='n' || x=='N'){

                 exit(0);
             }
    }
    while(x=='y' || x=='Y');



    
    
    
    
}