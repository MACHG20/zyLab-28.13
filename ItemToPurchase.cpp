#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

   ItemToPurchase::ItemToPurchase(){
      itemName = "";
      itemPrice = 0;
      itemQuantity = 0;
   }

   void SetName(string name){
      itemName = name;
   }

   void SetPrice(int price){
      itemPrice = price;
   }

   void SetQuantity(int quantity){
      itemQuantity = quantity;
   }

   string GetName(){
      return itemName;
   }
  
   int GetPrice(){
      return itemPrice;
   }
  
   int GetQuantity(){
      return itemQuantity;
   }

  void ItemToPuchase::Print(ItemToPurchase item1, ItemToPurchase item2) {
      cout << "TOTAL COST" << endl;
      item1.Print();
      item2.Print();
      int totalCost = (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity());
      cout << "Total: $" << totalCost << endl;
   }

};
