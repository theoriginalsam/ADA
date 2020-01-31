#include <stdio.h>

#include<iostream> 

#define SIZE 5 

using namespace std ;

int item ;
int arr[SIZE];
int i=0;
int k= 0 ;

void insert(int);
void display();
void deleteQ();



int main(int argc, char **argv)
{
    
    insert(22);
   
  
    deleteQ();
     
    
    display();

}

void insert(int item){
    
   if(i <= SIZE-1){ 
   arr[i]=item;
   i++;
   
   }
   
   else {
       cout<<"Full"<<endl;
   }
   
  
    
    
    
    
    
}

void deleteQ(){
    
    if(k==i){
        cout<<"Empty Queue"<<endl;
    }
  
  else{
    while(k<SIZE-1){
        arr[k]=arr[k+1];
        k++;
        
        
    }
        arr[k]=0;
        
     
        
  }
    
}


void display(){
    for(int j = 0 ; j<SIZE ; j++){
        
        cout<<arr[j];  
        cout<<"<-" ;
        
    }
   
}
