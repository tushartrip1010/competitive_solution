#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 void bubblesort(int ar[],int n)
 {
     int i,j;
     for(i=0;i<n-1;i++)
     for(j=0;j<n-i-1;j++)
        if(ar[j]>ar[j+1])
            swap(&ar[j],&r[j+1]);
 }
 void printArray(int ar[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << ar[i] << " ";
    cout << endl;
}
int main()
{   int k;
   int ar[]={7,10,4,3,20,15};
   int n =6;
   bubblesort(ar,n);
   cin>>"enter value of k\n";
   cin >> k;
   printArray(ar,n);
   cout<<"smallest element\n";
   int m =ar[k-1];
   cout << m;
}