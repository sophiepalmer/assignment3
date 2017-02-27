#include "set.h"
MathSet :: MathSet(); //constructor that create empty set with no elements
{
size=1;
members= new int [size];
size = 0;
}

MathSet :: MathSet( int NumMembers, int Array[]) //constructor with 2 elements 
{
size = NumMembers ; //size of array that user gives 
members = new int [size] ; //values of set 
for (int i = 0 ; i < size ; i++)
{
members[i] = Array[i]; //put members of set into array elements
}
}

MathSet :: MathSet ( const MathSet & s2 ) //copy constructor 
{
}

MathSet :: ~MathSet() //destructor
{
}

