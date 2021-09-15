/*Briana Padilla, COSC 1436-57001, Replit.com. This program outputs the ordinals of all of the values leading up to the entered value. */

#include <iostream> 
using namespace std;
int main () {
int num; //the variable input
cout<<" This program will take input from user and find the ordinal of the values leading up to input number. Please enter number "<<endl;
cin>>num; //input 



string ordinal(int i);

    for (int i = 1; i <= num; i++) //formula for loop
{

if ((i % 100) == 11 || ((i % 100) == 12) || ((i % 100) == 13))   //conditions (except for these integers)
{
cout << i << "th hello\n";
}
else if ((i % 10) == 1) //1st,21st,31st,41st,51st, etc.
{
cout << i << "st hello\n";
}
else if ((i % 10) == 2) //nd ordinal ending in 2
{
cout << i <<"nd hello\n";
}
else if ((i % 10) == 3) //rd ordinal ending in 3
{
cout << i <<"rd hello\n";
}
else 
{
cout << i <<"th hello\n";  //everything else
}
}

return 0;
} 