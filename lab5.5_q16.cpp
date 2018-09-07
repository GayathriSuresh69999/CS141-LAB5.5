// First include the libraray and the main function
#include<iostream>
using namespace std;
int main()
{ 
int i,j,k;
// Do the following five times
while (i<=5)
{
// Print the spaces 
for (int j=0;j< (5-i);j++)
{
cout << " ";
}
//Print the stars
for(k=(2*i)-1;k>0;k--)
{
cout << "*";
}
//Go to the next line
cout << endl;
i++;
}
return 3;
}

