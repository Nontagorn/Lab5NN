#include<iostream>
using namespace std;

int main(){
    int i ;
    int Even = 0;
    int Odd = 0;
    while(i != 0){
    cout << "Enter an integer: ";
    cin >> i;
    if(i == 0){
     break;
    }
    else if(i%2 == 0){
        Even += 1;
    }
    else{
        Odd += 1;
    }
    }
    cout << "#Even numbers = " << Even << "\n";
    cout << "#Odd numbers = " << Odd;
    return 0;
}
