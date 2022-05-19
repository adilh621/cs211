#include <iostream>
#include <vector>
using namespace std;


// factorial recursive
// 3*2*1
int fact(int a){
  if(a > 1){
    return a * fact(a-1);
  }
  return 1;
}


// factorial dynamically
int factDynamic(int a){

  
  int results[1000] = {0};
  results[0] = 1;
  for(int i = 1; i <= a ; i++){
    results[i] = i * results[i-1];
  }

  return results[a];
}


// fib recursion

int fib(int n){
    if( n <= 1) //base case
        return n;
     
    return fib(n-1) + fib(n-2); // recursive call
 
}

// fib dynamically

int factorialDynamically(int n)
{
    // Declare an array to store
    // Fibonacci numbers.
    // 1 extra to handle
    // case, n = 0
    int f[n + 2]; // results container (our nth digit is gonna b our answer)
    int i;
 
    // 0th and 1st number of the
    // series are 0 and 1
    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
         
       //Add the previous 2 numbers
       // in the series and store it
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
    }


int main(){

    cout << factDynamic(3) << endl;
}