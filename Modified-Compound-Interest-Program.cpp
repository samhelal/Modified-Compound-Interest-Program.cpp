/*(Modified Compound-Interest Program) Modify the compound-interest application 
of Fig. 5.6 to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9% and 10%.
Use a for loop to vary the interest rate.(c++ how to program)*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ;

int main (){

    double principal (1000) ;
    double rate (0) ;
    cout << setprecision(2) << fixed ;
    cout << " Please Enter rate " ;
    cin >> rate ;
    cout << " Intial pricipal : " << principal << endl ;
    cout << "    Interst rate :    " << rate << endl ;
    cout << "\n year " << setw(20) << "Amount on deposite" << endl ; 

    for(unsigned year(1); year <= 10 ; year++){

        double amount = principal * pow(1+rate,year) ;
        cout << setw(4) << year << setw(20)<< amount << endl ;
    }

}
