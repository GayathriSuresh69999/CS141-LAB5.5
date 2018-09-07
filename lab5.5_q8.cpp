// First include the libraray and the main function
#include<iostream>
using namespace std;
int main()
{ 
int i=1,j;
// Do the following five times
while(i<=5)
{
// Print stars in the increasing order
for (j=0;j<i;j++)
{
cout << "*";
}
// Go to the next line
cout << endl;
i++;
}
return 3;
}
