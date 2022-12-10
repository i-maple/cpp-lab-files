#include<iostream>
using namespace std;

class Student{
	int id;
	char name[50];
	public:
		void setData(){
			cout<<"Enter id"<<endl;
			cin>>id;
			cout<<"Enter name"<<endl;
			cin>>name;
		}
		void displayData(){
			cout<<"Name="<<name<<endl;
			cout<<"Id="<<id<<endl;
		}		
};

int main(){
	Student students[5];
	for(int i=0;i<5;i++){
		students[i].setData();
	}
	for(int i=0;i<5;i++){
		students[i].displayData();
	}
}
