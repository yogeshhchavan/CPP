#include<iostream.h>
using namespace std;
int main(){
  //Find the grade of student based on there marks...
  int m;
  cout<<"Enter the Marks of Student : ";
  cin>>m;

  if(m >= 90){
    cout<<"Grade A";
  }

  else if(m >= 80 && m < 90){
    cout<<"Grade B";
  }

  esle{
    cout<<"Grade C";
  }
  return 0;
}
