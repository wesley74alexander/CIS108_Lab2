#include <iostream>
#include <string>
using namespace std;
int main() {
  string title, author; //even though atom doesn't highlight string as a data type it still recognizes it as one
  int pubyear, pages, bookage;
  cout << "Enter the book title: ";
  getline(cin, title);
  cout << "Enter the author: ";
  getline(cin, author);
  cout << "What year was the book published? ";
  cin >> pubyear;
  cout << "How many pages are in the book? ";
  cin >> pages;
  const int currentyear = 2019;
  bookage = currentyear - pubyear;
  if(bookage < 10){
    cout << "This book is younger than ten years old \n";
  }
  else{
    cout << "This book is at least ten years old \n";
  }
  if(pages < 100){
    cout << "This book is a short book \n";
  }
  else if(pages >= 100 && pages <= 300){
    cout << "This book is an average book \n";
  }
  else{
    cout << "This book is a long book \n";
  }
  return 0;
}
