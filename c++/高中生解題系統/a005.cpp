#include <iostream>
using namespace std;
int main (){
    int a1,a2,a3,a4;
    while (cin >> a1 >> a2 >> a3 >> a4)
    {
        int a5,d=0;
        if (a2-a1==a4-a3)
        {
            d=a2-a1;
            a5=a4+d;
            cout<< a1 << " " << a2 << " "  << a3 << " " << a4 << " "  << a5 <<endl;
        }
        else if (a2/a1==a4/a3)
        {
            d=a2/a1;
            a5=a4*d;
            cout<< a1  << " " << a2  << " " << a3  << " "  << a4  << " " << a5 <<endl;
        }
        
    }
    




    return 0;
}