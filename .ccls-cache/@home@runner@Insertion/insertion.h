void display(int *a,int N){
 int i;
 for(i=0;i<N;i++){
     cout<<setw(5)<<a[i];
    
}
cout<<endl;
}
void insertion(int a[],int N){
int i,j,value,change=0;
for(i=0;i<N;i++){
     value=a[i];
    for(j=i-1;j>=0 && a[j]>value;j--){
     a[j+1]=a[j];
      change++;
      
      a[j]=value;
     display(a,N);
      
   }
      
     a[j+1]=value;
     display(a,N);
     cout<<endl;
  }
  cout<<"Number of change: "<<change<<endl;
}

