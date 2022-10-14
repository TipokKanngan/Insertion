using namespace std;
#include <iostream>
#include <iomanip>
#include "insertion.h"
int main(int argc,char** argv) {
  int change;
  int *a;
  int i;
  a=new int [argc-1];
  for(i=1;i<argc;i++) {
    a[i-1] = atoi(argv[i]);
    cout<<setw(5)<<a[i-1];
  }
   cout<<endl;

  int j,value,N=argc-1;
  insertion(a,N);

   cout << "After sorting" << endl;
    display(a,argc-1);
     cout<<endl;
  
   
    
  
}
