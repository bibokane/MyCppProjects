#include<iostream>

using namespace std;

int main()
{
	int quant;
	int choice;
	
	//Quantity
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
	
	//food items sold
	int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0; 
	
	// Total proce of items
	int Total_room=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0; 
	
	cout<<"\n\t Quantity of items we have";
	cout<<"\n Rooms avaliable: ";
	cin>> Qrooms;
	cout<<"\n Quantity of Pasta: ";
	cin>> Qpasta;
	cout<<"\n Quantity of Burger: ";
	cin>> Qburger;
	cout<<"\n Quantity of Noodles: ";
	cin>> Qnoodles;
	cout<<"\n Quantity of Shake: ";
	cin>> Qshake;
	cout<<"\n Quantity of Chicken: ";
	cin>> Qchicken;
	
	m:
	cout<<"\n\t\t\t Please select from the Menu options";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burger";
	cout<<"\n4) Noodles";
	cout<<"\n5) Shake";
	cout<<"\n6) Chicken";
	cout<<"\n7) Information regarding sales and collections";
	cout<<"\n8) Exit";
	
	cout<<"Please Enter your choice!";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter the number of Rooms you want:";
			
			cin>>quant;
			if(Qrooms-Srooms >=quant)
			{
				Srooms = Srooms+quant;
				Total_room=Total_room+quant*1200;
				cout<<"\n\n\t\t "<<quant<<" room/rooms have been alloted to you!";
			}
			else
			{
				cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remaining in hotel";
			}
			break;
		case 2:
			cout<<"\n\n Enter Pasta Quantity you want:";
			
			cin>>quant;
			if(Qpasta-Spasta >=quant)
			{
				Spasta = Spasta+quant;
				Total_pasta=Total_pasta+quant*250;
				cout<<"\n\n\t\t "<<quant<<" pasta is the order!";
			}
			else
			{
				cout<<"\n\tOnly "<<Qpasta-Spasta<<" Pasta remaining in hotel";
			}
			break;
		case 3:
			cout<<"\n\n Enter Burger Quantity:";
			
			cin>>quant;
			if(Qburger-Sburger >=quant)
			{
				Sburger = Sburger+quant;
				Total_burger=Total_burger+quant*120;
				cout<<"\n\n\t\t "<<quant<<" Burger is the order!";
			}
			else
			{
				cout<<"\n\tOnly "<<Qburger-Sburger<<" Burger remaining in hotel";
			}
			break;
		case 4:
			cout<<"\n\n Enter Noodle Quantity:";
			
			cin>>quant;
			if(Qnoodles-Snoodles >=quant)
			{
				Snoodles = Snoodles+quant;
				Total_noodles=Total_noodles+quant*140;
				cout<<"\n\n\t\t "<<quant<<" Noodle is the order!";
			}
			else
			{
				cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" Noodle remaining in hotel";
			}
			break;
		case 5:
			cout<<"\n\n Enter Shake Quantity:";
			
			cin>>quant;
			if(Qshake-Sshake >=quant)
			{
				Sshake = Sshake+quant;
				Total_shake=Total_shake+quant*50;
				cout<<"\n\n\t\t "<<quant<<" Shake is the Order";
			}
			else
			{
				cout<<"\n\tOnly "<<Qshake-Sshake<<" Shake remaining in hotel";
			}
			break;
		case 6:
			cout<<"\n\n Enter Chicken Quantity:";
			
			cin>>quant;
			if(Qchicken-Schicken >=quant)
			{
				Schicken = Schicken+quant;
				Total_chicken=Total_chicken+quant*100;
				cout<<"\n\n\t\t"<<quant<<" Chicken is the Order!";
			}
			else
			{
				cout<<"\n\tOnly "<<Qchicken-Schicken<<" Chicken remaining in hotel";
			}
			break;
		case 7:
			cout<<"\n\t\tDetails of sales and collection";
			cout<<"\n\n Number of Rooms we had: "<<Qrooms;
			cout<<"\n\n Number of Rooms we gave for rent "<<Srooms;
			cout<<"\n\n Remaining Rooms : "<<Qrooms-Srooms;
			cout<<"\n\n Total Rooms collection for the day : "<< Total_room;
			
			cout<<"\n\n Quantity of Pasta we had: "<<Qpasta;
			cout<<"\n\n Quantity of Pasta we sold "<<Spasta;
			cout<<"\n\n Remaining Pasta Quantity : "<<Qpasta-Spasta;
			cout<<"\n\n Total Quantity of Pasta for the day : "<< Total_pasta;
			
			cout<<"\n\n Quantity of Burger we had: "<<Qburger;
			cout<<"\n\n Quantity of Burger we sold "<<Sburger;
			cout<<"\n\n Remaining Quantity of Burger : "<<Qburger-Sburger;
			cout<<"\n\n Total Quantity of Burger for the day : "<< Total_burger;
			
			cout<<"\n\n Quantity of Noodle we had: "<<Qnoodles;
			cout<<"\n\n Quantity of Noodle we sold "<<Snoodles;
			cout<<"\n\n Remaining Quantity of Noodle : "<<Qnoodles-Snoodles;
			cout<<"\n\n Total Quantity of Noodle for the day : "<< Total_noodles;
			
			cout<<"\n\n Quantity of Shake we had: "<<Qshake;
			cout<<"\n\n Quantity of Shake we sold "<<Sshake;
			cout<<"\n\n Remaining Quantity of Shake : "<<Qshake-Sshake;
			cout<<"\n\n Total Quantity of Shake for the day : "<< Total_shake;
			
			cout<<"\n\n Quantity of Chicken we had: "<<Qchicken;
			cout<<"\n\n Quantity of Chicken we sold "<<Schicken;
			cout<<"\n\n Remaining Quantity of Chicken : "<<Qchicken-Schicken;
			cout<<"\n\n Total Quantity of Chicken for the day : "<< Total_chicken;
			
			cout<<"\n\n\n Total Collection for the day: "<<Total_room+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
			break;
		case 8:
			exit(0);
			default:
				cout<<"\n Please select the numbers mentioned above!";
	}
	goto m;
}
