#include<iostream>
using namespace std;

int sum(int a, int b){ //function definition
    int s = a + b;
    return s;
}

int min(int a,int b){ //function definition
    if (a<b)
        return a;
    else
        return b;
}

int sumN(int n){ //function definition
    int sum =0;
    for(int i =1; i<=n;i++){
        sum +=i;
    }
    return sum;
}

int factorial(int n){ //function definition
    int fact  = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    cout<<"SUM :"<<sum(4,5)<<endl; //function call
    cout<<"MIN :"<<min(7,9)<<endl; //function call
    cout<<"Sum of N Numbers:"<<sumN(5)<<endl; //function call
    cout<<"Sum of N Numbers:"<<sumN(10)<<endl; //function call
    cout<<"Factorial Number:"<<factorial(5)<<endl; //function call
    return 0;
}


 // =========================================================================================
 //                                           OUTPUT
 // =========================================================================================
   
   
 //                              SUM :9
 //                              MIN :7
 //                              Sum of N Numbers:15
 //                              Sum of N Numbers:55
 //                              Factorial Number:120
   
