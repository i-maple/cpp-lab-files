#include<iostream>
#include<process.h>
using namespace std;

class Account{
    private:
        int accountNumber;
        float balance;
        char accountName[100], accountType[100];

    public:
        void setData(){
            cout<<"Please enter your name : ";
            cin>>accountName;
            cout<<"Please enter your account Number : ";
            cin>>accountNumber;
            cout<<"Please enter your account type : ";
            cin>>accountType;
            cout <<"Please enter your initial balance : ";        
            cin>>balance;
        }
        void deposit(){
            float amount;
            cout<<"Please enter amount to deposit : ";
            cin>>amount;
            if (amount>0)
            {
                balance = balance + amount;
                cout<<"Amount deposited successfully"<<endl;
            }
            else{
                cout<<"Amount should be positive"<<endl;
            }
        }
        void withdraw(){
            float amount;
            cout<<"Please enter amount to be withdrawn : ";
            cin>>amount;
            if(amount>balance){
                cout<<"No sufficient balance"<<endl;
            }
            else{
                balance = balance - amount;
                cout<<"Amount withdrawn successfully"<<endl;
            }
        }
        void displayBalance(){
            cout<<"The balance in account is Rs. "<<balance<<endl;
        }
};

int main(){
    Account account;
    int choice;
    account.setData();
    phase1:
    cout<<"Please enter your choice"<<endl;
    cout<<"1. Deposit 2. Withdraw 3. Display Balance 4. Exit"<<endl;
    cin>>choice;
    if(choice==1){
        account.deposit();
        goto phase1;
    }
    else if(choice==2){
        account.withdraw();
        goto phase1;
    }
    else if(choice==3){
        account.displayBalance();
        goto phase1;
    }
    else if(choice==4){
        exit(0);
    }
    else{
        cout<<"Please enter the valid choices"<<endl;
        goto phase1;
    }
}