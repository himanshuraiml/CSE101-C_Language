#include<iostream>

using namespace std;
//void swap(int *, int *  ); 
inline int currconv(float x,const int conr=65 ) {
   
    return x*conr;
}
int main() {
    //int a ,b;
    float curr;
    cout<< "Enter thr curr:"<<endl;
    cin>>curr;
    cout<<"curr in ruble is :"<<currconv(curr)<<endl;
    cout<<"curr in ruble is :"<<currconv(curr)<<endl;
    cout<<"curr in ruble is :"<<currconv(curr)<<endl;
    cout<<"curr in ruble is :"<<currconv(curr)<<endl;
    /* cout <<"Enter first number:  "<<endl;30
    cin>>a;
    cout <<"Enter second number:  "<<endl;
    cin>>b;
    cout<<"Num of before swap :"<<a<<"\t"<<b<<endl;
    swap(&a,&b);
    cout<<"Num of after swap :"<<a<<"\t"<<b<<endl; */
    //cout<<"Sum of Numbers:"<<sum(a,b)<<endl; //calling of function

    return 0;
}
// function declearation
/* int sum (int x, int y) {
    
    return x+y;
} */
/* void swap(int *a, int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
} */
