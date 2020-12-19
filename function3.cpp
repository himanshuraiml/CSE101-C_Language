#include<iostream>

using namespace std;

int calculate (int member[], int size)
{
int i, average = 0;
for( i = 0; i < size; i++)
     average += member [i];
average /= size;
return average;
}
int main ( )
{
int average, student [5] = {67, 93, 88, 89, 74};
average = calculate (student, 5);
cout << "The average score is " << average << endl;
cin >> average;
return 0;
}