#include<iostream.h>
using namespace std;
int main(){
  //while loop....

    int n;
    cout<<"Enter the number :";
    cin>>n;
    int count = 1;

    while (count <= n)
    {
        cout<<count<<" ";
        count += 1;
    }
  
 //To find the 1 to n odd number of sum....  
  
  int n,oddSum = 0;
  cout<<"Enter the number :";
  cin>>n;
  int i =0;
  while(i <= n){
    if(i%2 != 0){
      oddSum += i;
    }
    i++;
  }
  cout<<"Odd Sum :"<<oddSum;
  
  return 0;
}
