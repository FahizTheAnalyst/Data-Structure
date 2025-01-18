
#include<stdio.h>
int top=-1,s[5],i,item,choice;
void push(int item){
	if(top>=4){
	printf("Stack is full");
	}
	else{
	s[top]=item;
	top+=1;
	}
}
void pop(){
	if(top<=-1){
	printf("Stack is empty\n");
	}
	else{
	item=s[top];
	top-=1;
	}
}
int main(){
	while(1){
	printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit \n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
	if(choice == 4)
	break;
	if(choice==1){
	printf("Enter the element \n");
	scanf("%d",&item);
	push(item);
	}
	if(choice==2){
	printf("pop element \n");
	pop();
	}
	if(choice==3){
	printf("Display \n");
	for(i=top-1;i>=-1;i--){
	printf("%d \n",s[i]);
	}
	}
	}
	return 0;
}
