// First include the library and enter the main function
#include<iostream>
using namespace std;
int main()
{
int i,j,k,n=5;
 // Do the following for n times
for (int i =0;i < n;i++)
{
// Print some spaces
for (int j =0;j < n-(i+1);j++)
{
cout << " ";
}
// Print some stars
for (int k=0;k < n;k++)
{
cout <<"*";
}
//Go to the next line
cout << endl;
}
return 3;
}
