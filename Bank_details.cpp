#include<iostream>
using namespace std;
int main()
{
    float deposit,withdraw,balance;
	balance=4000;
	int x;
	cout<<"\n1.Deposit Amount\n2.withdraw\n3.check Balance\n4.exit\n";
	do{
	cout<<"\nenter the choice=";
	cin>>x;
	
	switch(x)
	{ 
	   case 1:cout<<"\nenter the amount=";
	          cin>>deposit;
	          balance=balance+deposit;
	          cout<<"balance="<<balance;
	          cout<<"\n____________";
	          break;
	    case 2:cout<<"\nenter the amount=";
	          cin>>withdraw;
	          balance=balance-withdraw;
	          cout<<"balance="<<balance;
	          cout<<"\n____________";
	          break;
	   
	    case 3:cout<<"total balance is"; 
		       cout<<" "<<balance;
		       cout<<"\n____________";
	          break;
		default:cout<<"Exit";
		        cout<<"\n____________";
		         
		    
	}
}
	while(x!=4);

}
