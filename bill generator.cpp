#include <iostream>
using namespace std;

int main() {

	int item[6];
	int item_price[6];
		item_price[1]=500;
		item_price[2]=476;
		item_price[3]=230;
		item_price[4]=645;
		item_price[5]=580;
	int items_price[6];
	int total=0;
	int money;
	int balance;
	
	cout << "\n Item_1 is Rs.500/=\n Item_2 is Rs.476/=\n Item_3 is Rs.230/=\n Item_4 is Rs.645/=\n Item_5 is Rs.580/=\n\n";
	
	for(int i=1;i<6;i++) {
		cout << "Type number of items of Item_" <<i << ": ";
		cin >> item[i];
		items_price[i] = item[i]*item_price[i];
		total = total+items_price[i];
		cout << "Total is: " << total << "\n";
		
	}
	
	cout << "\nEnter your money: ";
	cin >> money;

for( ; ; ) {

	if(money>=total) {
		balance=money-total;
		goto last;
	}
	else {
		cout << "The total is: " << total << "\n";
			cout << "\nEnter your money: ";
			cin >> money;
	}
	
}


last:

	cout << "\n\n\t\t\tBill Receipt\n";
	cout << "\t\t--------------------------------\n\n";

	cout << "\n Item Name \t Number of items \t Items price\n";
	cout << "--------------------------------------------------------\n";
	
	for(int i=1;i<6;i++) {
		cout << " Item_" <<i;
		cout << "\t\t\t " << item[i];
		cout << "\t\t  " << items_price[i] << "\n";
	}
	
	cout << "--------------------------------------------------------\n";
	cout << "Total: \t\t\t\t\t  " << total << "\n";
	cout << "Entered money: \t\t\t\t  " << money << "\n";
	cout << "--------------------------------------------------------\n";
	cout << "Balance: \t\t\t\t  " << balance << "\n";
	
return 0;
}

