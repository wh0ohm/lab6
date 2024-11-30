#include<iostream>
using namespace std;

int main(){
    int num[100];
    int even=0;
    int odd=0;
    int i=0;
    int n=1;
    
    while(n != 0){
        cout << "Enter an integer: ";
        cin >> num[i];
        
        if(num[i]==0){
            n = 0;
        }i++;
    }
    
    for(int j=0;j<i;j++){
        if(num[j]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}