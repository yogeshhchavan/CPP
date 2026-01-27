// Reverse pattern program............
#include<iostream.h>
using namespace std;

int main(){
 n = 6;
  for(int i =0; i<n; i++){
    for(int j = i+1; j> 0; j--){
      cout<<j<<" ";
    }
    cout<< endl
  }
  return 0;
}


// output...............
// 1  
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 
// 6 5 4 3 2 1 
