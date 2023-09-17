#include <iostream>
using namespace std; 
int main (){ 
    int a; 
    while (cin >> a) 
    { 
        if (a>=3 and a<=5) 
        { 
            cout << "Spring" << endl;    
        } 
        else if (a>=6 and a<=8) 
        { 
            cout << "Summer" << endl; 
        } 
        else if (a>=9 and a<=11) 
        { 
            cout << "Autumn" << endl; 
        } 
        else  
        { 
            cout << "Winter" << endl; 
        } 
         
         
    } 
      
    return 0; 
}  