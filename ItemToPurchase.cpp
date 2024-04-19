#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

class ItemToPurchase{
  public:
  ItemToPurchase();
  void SetName(string name){
    this->name = name;
  }
  void SetPrice(int price){
    this->price = price;
  }
  void SetQuantity(int quantity){
    this->quantity = quantity;
  }

  string GetName(){
    return name;
  }
  int GetPrice(){
    return price;
  }
  int GetQuantity(){
    return quantity;
  }

  void Print(item){
};

/* Type your code here */
