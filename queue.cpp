#include<iostream>
using namespace std;
# define n 5
int queue[n];
int rear=-1;
int front=-1;
int value;
void enq( int value){
	if(rear==n-1){
		cout<<"it is overflow condition"<<endl;
	}
	if(rear==-1&&front==-1){//if the rear and front is -1
		rear++;
		front++;
	  queue[rear]=value;
	  cout<<"Element inertion is succes in queue"<<endl;
	}
	else{
		rear++;
		queue[rear]=value;
		cout<<"Element is successful inserted"<<endl;
	}
}
int display(){
	if(front==-1&&rear==-1){
		cout<<"queue is empty"<<endl;
	}
	else{
	 for( int i=rear;i>=0;i--)
	 cout<<queue[i]<<endl;
	}
}
int main(){
 enq(10);
 enq(30);
 enq(40);
 enq(50);
 enq(60);
 enq(70);
 display();
 


	return 0;
}
