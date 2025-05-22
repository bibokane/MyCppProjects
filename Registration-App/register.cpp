#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();


int main()
{
	int c;
	cout<<"\t\t\t__________________________________________________________________________________\n\n\n";
	cout<<"\t\t					Welcome to the Login page	  				\n\n\n";
	cout<<"\t\t\t_________________________ 	       MENU 		__________________________________  \n\n";
	cout<<"																								      \n\n";
	cout<<"\t| Press 1 to LOGIN							|"<<endl;
	cout<<"\t| Press 2 to REGISTER							|"<<endl;
	cout<<"\t| Press 3 if you forgot your PASSWORD					|"<<endl;
	cout<<"\t| Press 4 to EXIT							|"<<endl;
	cout<<"\n\t\t Please enter your choice: ";
	cin>>c;
	cout<<endl;
	
	switch(c)
	{
		case 1:
			login();
			break;
		case 2:
			registration();
			break;
		case 3:
			forgot();
			break;
		case 4:
			cout<<"\t\t\t Thank you! \n\n";
			break;
		default:
			system("cls");
			cout<<"\t\t\t Please select from the options given above \n"<<endl;
			main();
	}
	
}

void login()
{
	int count;
	string userName, password, name, pass;
	system("cls");
	cout<<"\t\t\t Please enter the username and password"<<endl;
	cout<<"\t\t\t USERNAME "; 
	cin>>userName;
	cout<<"\t\t\t PASSWORD ";
	cin>>password;
	
	ifstream input("records.txt");
	
	while(input>>name>>pass)
	{
		if(name==userName && pass==password)
		{
			count=1;
			system("cls");
		}
		input.close();
		if(count==1)
		{
			cout<<"\t\t\t"<<userName<<"  Your LOGIN is succesfull \n\t\t\t Thanks for loggin in! \n";
			cout<<"\n\n";
			main();
		}
		else
		{
			cout<<"\n LOGIN ERROR \n Please check your username and your password";
			cout<<"\n\n";
			main();
		}
	}
}

void registration()
{
	string ruserName, rpassword, rname, rpass;
	system("cls");
	cout<<"\t\t\t Enter the username: ";
	cin>>ruserName;
	cout<<"\t\t\t Enter the password: ";
	cin>>rpassword;
	
	ofstream f1("records.txt", ios::app);
	f1<<ruserName<<' '<<rpassword<<endl;
	system("cls");
	cout<<"\n\t\t\t Registration is succesfull! \n";
	main();
}

void forgot()
{
	int option;
	system("cls");
	cout<<"\t\t\t Did you forgot the password? \n";
	cout<<"Press 1 to search your name by username "<<endl;
	cout<<"Press 2 to go back to the menu "<<endl;
	cout<<"\t\t\t Enter your choice:  "<<endl;
	cin>>option;
	switch(option)
	{
		case 1:
		{
			int count=0;
			string suserName, sname, spass;
			cout<<"\n\t\t\t Enter the username : ";
			cin>>suserName;
			ifstream f2("records.txt");
			while(f2>>sname>>spass)
			{
				if(sname==suserName)
				{
					count=1;
				}
				f2.close();
				if(count==1)
				{
					cout<<"\n\n Your account is found! \n";
					cout<<"\n\n Your password is : "<<spass;
					cout<<"\n\n";
					main();
					
				}
				else
				{
					cout<<"\n\t Sorry! your account is not found! \n";
					cout<<"\n\n";
					main();
				}
				
			}
			break;
		}
		case 2:
			{
				main();
				
			}
		default:
			cout<<"\t\t\t Wrong choice! Please try again "<<endl;
			forgot();
	}
}
