#include<iostream>
using namespace std;
class Account{
	int accountNo;
	float Balance;
	char accountName[50], accountType[50];
	public:
		void setData(){
		    cout<<"Enter your name ";
            cin>>accountName;
            cout<<"Enter your account Number ";
            cin>>accountNo;
            cout<<"Enter your account type ";
            cin>>accountType;
            cout <<"Enter your balance ";        
            cin>>Balance;
			
		}
		void Deposite(){
			float Amount;
			cout<<"Enter the amount to be deposited ";
			cin>>Amount;
			Balance=Balance + Amount;
			cout<<"Successful, Your balance now is "<<Balance<<endl;			
		}
		void Withdraw(){
			float Amount;
            cout<<"Please enter amount to be withdrawn : ";
            cin>>Amount;
            if(Amount>Balance){
                cout<<"No sufficient balance"<<endl;
            }
            else{
                Balance=Balance - Amount;
                cout<<"Successfull, Your balance now is "<<Balance<<endl;
            }
			
		}
		void displayBalance(){
			cout<<"Your balance is "<<Balance<<endl;
		
		}
	
};

int main(){
	Account A;
	int input;
    A.setData();
    do{	
        cout<< "Select one:"<<endl<<"[1] Deposite"<<endl<<"[2] Withdraw"<<endl<<"[3] displayBalance"<<endl<<"[4] Exit"<<endl;
        cin>>input;
        switch(input) 
        { 
            case 1:
                A.Deposite();
                break; 
            case 2:
                A.Withdraw();
                break;
            case 3:
                A.displayBalance();
                break;
            case 4: 
                exit(0); 
        };
    }while(input!=4); 
		
}