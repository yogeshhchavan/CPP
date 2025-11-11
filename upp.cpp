#include<iostream.h>
using namespace std;

int main(){

  // To find the charcter is in uppercase or lowercase....
  char ch;
  cout<<"Enter the character ";
  cin>>ch;

  if(ch >='A' && ch <= 'Z'){   // also we can find with this if(ch >= 65 && ch <= 90)
    cout<<"Uppercase";
  }
  esle{
    cout<<"Lowercase";
}
  return 0;
}
