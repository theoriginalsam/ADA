#include <stdio.h>
#include <iostream>

#define SIZE 6

using namespace std ;


int front =-1;
int rear =-1;
int item ;
  int temp;
  int arr[SIZE-1];

void insert(int);
void deleteQ();
bool isEmpty();
bool isFull();
void display();





int main(int argc, char **argv)
{
    
    insert(44);
    insert(42);
    insert(41);
    insert(47);
    insert(48);
     insert(48);

     
 deleteQ();
     insert(9);
      
   
    
    display();
    

}

bool isEmpty(){
    if(front==rear==-1 && front>temp)
        return true;
        
        
    
    
    
}

bool isFull(){
    if(front-rear==1)
        return true ;
     else if(front==-1 && rear==SIZE-1)
        return true ;
    
    
    
}

void insert(int item){
    
    if(!isFull()){
           rear++;
  
    temp = rear%SIZE;
    arr[temp]=item;
      
       
    }
    
    else   cout<<"Queue is full"<<endl;
    
 
    
    
    
}

void deleteQ(){
    
    if(isEmpty()){
        cout<<"Empty Queue"<<endl;
    }
    
    else if(front==-1){
        front=1;
        
       
        
        
    }
    else 
        front++;
    
    
}

void display(){
//Something is wrong in the display function,will solve in no time
    
    if(front==-1){
    for(int i=front+1;i<=SIZE;i++){
        cout<<arr[i];
        cout<<"->";
    }
    
    }
    else{
        
          for(int i=front;i<=SIZE;i++){
        cout<<arr[i];
        cout<<"->";
          }
    }
}
