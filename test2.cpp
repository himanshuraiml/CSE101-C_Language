#include<iostream>

using namespace std;

//void swap(int , int ); //decleration of a function ---> "Function prototype"
//void swap(int*, int*); //call by reference using pointer
void swap(int &, int &);// call by c++ reference variable

int main() {
    int a , b;
    cout<<"Enter the the first number:"<<endl;
    cin>>a;
    cout<<"Enter the the second number:"<<endl;
    cin>>b;
   cout<<"first Number:"<<a<<" Second Number: "<<b<<endl;
    
      swap(a,b);
   // swap(&a,&b); //call to a function

   cout<<"first Number:"<<a<<" Second Number: "<<b<<endl;

    return 0;
}
//defination of a function
/* void swap(int a, int b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
} */
// call by reference using pointer
/* void swap(int *a, int *b) {

    int temp= *a;
    *a=*b;
    *b=temp;
} */
void swap(int &a, int &b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
}