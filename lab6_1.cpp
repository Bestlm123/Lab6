#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int num;
    int even = 0 , odd = 0;
    while (i > 0){
        cout << "Enter an integer: ";
        cin >> num;
        if (num == 0){
            i-=1;
        }
        else{
            if (num % 2 == 0){
                even+=1;
            }
            else {
                odd+=1;
            }
        }
    }
    
    
    cout << "#Even numbers = " << even << "\n" ;
    cout << "#Odd numbers = " << odd ;
    return 0;
}
