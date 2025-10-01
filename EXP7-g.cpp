//Dhairya Thakkar
//24070123037
//A2
#include <iostream>
using namespace std;
int main(){
    string a;
    cout<< "enter the string: ";
    cin>>a;
    int v =a.length();
    cout << "reversed string is: ";
    for (int i=0;i<=v;i++){
       cout << a[v-i];
    }
}

/*Output : 
enter the string: harsh
reversed string is: hsrah
*/
