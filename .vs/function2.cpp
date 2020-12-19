#include<iostream>

using namespace std;

void printInt(int printable){
cout << "The int you passed in has value " << printable << endl;
}
/* void foo( int &i )
{
++i;
cout<<i<<endl;
} */

/* void printIntArr(int *array_arg, int array_len){
std::cout << "The length of the array is " << array_len << std::endl;
for(int i = 0; i < array_len; i++)
std::cout << "Array[" << i << "] = " << array_arg[i] << std::endl; } */


int main()
{

    int my_array[5];
    for(int i = 0; i < 5; i++){
        my_array[i] = i * 2;
        }
    for(int i = 0; i < 5; i++)
        printInt(my_array[i]); // <-- We pass in a dereferenced array element
        
   // printIntArr(my_array, 5);
         
/* int bar = 5; // bar == 5
foo( bar ); // bar == 6
foo( bar ); // bar == 7 */
return 0;
}

