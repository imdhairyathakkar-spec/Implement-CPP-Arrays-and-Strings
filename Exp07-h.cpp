//Dhairya Thakkar
//24070123037
//A2
#include <iostream>
using namespace std;
int main(){
    string a ;
    cout << "Enter a string: ";
    cin >> a ;
    int d=0;
    int v= a.length();
    for (int i=0; i<=v/2; i++){
        if (a[i] != a[v-i-1]){
            d=5;
            break;
        }
    }
    if (d==0){
        cout << "string is palindrome" ;
    }
    else{
        cout << "string is not palindrome" ;
    }
}

/* output :
Enter a string: Harsh 
string is not palindrome

Enter a string: abba
string is palindrome
*/
