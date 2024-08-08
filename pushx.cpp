#include<iostream>
using namespace std;
# define n 5
int stack[n];
int top=-1;

int push(int record){
	if (top==n-1){
		cout<<"it is overflow condition"<<endl;
	}
	else{
		top++;
		stack[top]= record;
		cout<<"the insert sucess"<<endl;
	}
}
/*int pop(int value){
	if(top==-1){
		cout<<"it is underflow "<<endl;
	}
	else{
		top--;
		stack[top]=value;
	}
}*/
int main(){
push(10);
push(20);
push(30);
push(40);
push(50);
pop(50);
pop(40);


	return 0;
}