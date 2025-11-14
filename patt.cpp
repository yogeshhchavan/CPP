/*print simple pattern program...*/

#include<iostream>
using namespace std;
int main(){
  int n = 4;
  for(int i = 1; i <= n; i++){ //outer loop which print the line how many you want to print......
    for(int j = 1; j <= n; j++){ //inner loop which print how many pattern or data is showing to print.........
      cout<<j; //  print the data...
    }
    cout<<endl;// print the data on next line ......
  return 0;
  }
}

/*out-put
1234 
1234
1234
1234*/
