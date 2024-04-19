#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   ItemToPurchase item1, item2;
   string name;
   int price, quantity;
  
   cout << "Item 1"<< endl;
   cout << "Enter the item name:" << endl;
   cin >> name;
   item1.SetName(name);
   cout << "Enter the item price:"<< endl;
   cin >> price;
   item1.SetPrice(price);
   cout << "Enter the item quantity:" << endl;
   cin >> quantity;
   item1.SetQuantity(quantity);
   
   cout << endl;
   
   cout << "Item 2"<< endl;
   cout << "Enter the item name:" << endl;
   cin >> name;
   item2.SetName(name);
   cout << "Enter the item price:"<< endl;
   cin >> price;
   item2.SetPrice(price);
   cout << "Enter the item quantity:" << endl;
   cin >> quantity;
   item2.SetQuantity(quantity);
   
   
   return 0;
}
