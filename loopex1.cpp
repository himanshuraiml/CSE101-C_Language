#include<iostream>

using namespace std;

int main() {
    //for (int i=0;i<5;i++) {
      //  cout<<"Hello World ! \n";
      int i=0;
      /* for (;i<5;) {
          cout<<"Hello World ! \n";
          i++;
      } */
    //}
     for(int i=0;i<5;i++) {
       if(i==3){
         continue;
       }
       cout<<i<<endl;

     }
     return 0;
}