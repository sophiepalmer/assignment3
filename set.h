/*
@file: set.h
@author: Sophie Palmer
@date: Feb 27 2017
 Purpose:

 
*/
#ifndef SET_H
#define SET_H
Class Set {
public:
MathSet(); //default constructor 
MathSet(int NumMembers, int Array[]); //constructor with 2 arguments, number of members and array of members
MathSet( const MathSet & s2 ); //copy constructor 
~MathSet(); //destructor 
MathSet operator = ( const MathSet & s2 ) const ; //overload assignemnt operator = 
private:
int size;
int *members 
};
