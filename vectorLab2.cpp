#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <class T>
void printVector(vector<T> v){
  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

bool validatePin(string s){

    if(s.length() > 6 || s.length() < 4){
        return 0;
    }
    else{
        return 1;
    }
}

bool checkPin(vector<char> pin , string input , int size){

    for(int i = 0; i < size; i++){
        if(pin[i] != input[i]){
            return 0;
        }
    }
    return 1;


}

int main (){

    string num;
    vector <char> pin;
    cout << "Create a 4-6 digit pin: ";
    cin >> num;
    int size = num.length();


    if(validatePin(num)){
        for(int i = 0 ; i < size ; i++){
            pin.push_back(num[i]); // putting digits in vector
        }
    }
    else{
        cout << "Pin cannot be formed" << endl;
    }
    
    string verifiedNum;
    cout << "verify the pin entered: " << endl;
    cin >> verifiedNum;


    if(validatePin(num)){
        if(checkPin(pin,verifiedNum,size)){
            cout << "Pin verified" << endl;
            printVector(pin);
        }
        else{
            cout << "Pin not verified" << endl;
        };
    }
    else{
        cout << "Invalid pin" << endl;
    }

}