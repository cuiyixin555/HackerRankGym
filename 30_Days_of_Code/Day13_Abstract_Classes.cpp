#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Book {
protected:
  string title;
  string author;

public:
  Book(string t, string a) {
    title = t;
    author = a;
  }
  virtual void display() = 0;
};

// Write your MyBook class here
class MyBook : public Book {
protected:
  int price;

public:
  //   Class Constructor
  //
  //   Parameters:
  //   title - The book's title.
  //   author - The book's author.
  //   price - The book's price.
  //
  // Write your constructor here
  MyBook(std::string t, std::string a, int price) : Book(t, a) {
    this->price = price;
  }

  //   Function Name: display
  //   Print the title, author, and price in the specified format.
  //
  // Write your method here
  void display() {
    std::cout << "Title: " << this->title << std::endl;
    std::cout << "Author: " << this->author << std::endl;
    std::cout << "Price: " << this->price << std::endl;
  }
};
// End class

// How to build: g++ -std=c++17 -Wall -o Day13_Abstract_Classes 30_Days_of_Code/Day13_Abstract_Classes.cpp
// How to run: ./Day13_Abstract_Classes
int main() {
  string title, author;
  int price;
  getline(cin, title);
  getline(cin, author);
  cin >> price;
  MyBook novel(title, author, price);
  novel.display();
  return 0;
}
