//
//  main.cpp
//  assignment3-4
//
//  Created by Le Vinh Phuc on 27/10/2019.
//  Copyright © 2019 Le Vinh Phuc. All rights reserved.
//
/*A program in which you define two data structures: room and customer.
The fields for room should be: room_id, type (single, double, ...)
and price per night. The fields for customer should be: name, room_id
and number_of_nights. The program must ask the number of rooms and customers
from the user, allocate memory for them and read data for them. After reading
the data, the program must print a list which shows what room (room_id)
is occupied by what customer and display the customer information.
*/
#include <iostream>
using namespace std;


struct room {
int roomid;
char type[100];
double price;
};
struct customer {
char name[100];
int roomid;
int num;
};

int main(void) {

int i, j;

int room_num, customer_num;

cout << "Number of rooms: ";
cin >> room_num;

room* r = new room[room_num];

cout << "Number of customers: ";
cin >> customer_num;



customer *cus=new customer[customer_num];


for (i = 0; i < room_num; i++) {
cout << "Room id: " << endl;
cin >> r[i].roomid;
cout << "Type of room: " << endl;
cin >>r[i].type;
cout << "Price: " << endl;
cin >> r[i].price;
cout << endl;
}
cout << endl;

for (i = 0; i < customer_num; i++) {
cout << "Name of customer: " << endl;
cin >> cus[i].name;
cout << "Room id: " << endl;
cin >> cus[i].roomid;
cout << "Number of night: " << endl;
cin >> cus[i].num;
cout << endl;
}
cout << endl;
for (i = 0; i < customer_num; i++) {
for (j = 0; j < room_num; j++) {
if (r[i].roomid == cus[j].roomid) {
cout << "Room: " << cus[i].roomid << " ---- Customer: " << cus[j].name << " ---- Number of night: " << cus[i].num << " ---- Price per night: " << r[i].price << endl;
}
}
}

r = NULL;
cus = NULL;
delete[]r;
delete[]cus;
return 0;
}
