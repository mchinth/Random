struct node {
int data;
struct node* next;
};

node * newnode(key)
{
node * temp= new node;
temp->data=key;
temp->next= Null;
return temp;
}
void main(){
	struct node* res=NULL;
	struct head* = newnode(10);
	head->next= newnode(100);
	head->next->next= newnode(1000);
	struct head2* = newnode(1);
	head2->next= newnode(101);
	head2->next->next= newnode(102);
	//given 2 linked lists in sorted order , merge them to produce linked list in reverse sorted order
	res= mergesort(&head, &head2);
	res= mergesort(&head, &head2);
}

node* mergesort(struct node* list1, struct node* list2){
	struct node *head= NULL;
	//head->next= NULL;
	while(list1 && list2){
		if (list1->data <= list2->data){
			node * temp= list1->next; // storing list1 next value in temp , so that not loose track of list1
			list1->next=head;
			head= list1;
			list1=temp;
		}
		else{
			node * temp= list2->next; // storing list2 next value in temp , so that not loose track of list2
			list2->next=head;
			head= list2;
			list2=temp;
		}
	}

	while(list2){
		node * temp= list2->next; // storing list2 next value in temp , so that not loose track of list2
		list2->next=head;
		head= list2;
		list2=temp;
	}
	while(list1){
		node * temp= list1->next; // storing list1 next value in temp , so that not loose track of list1
		list1->next=head;
		head= list1;
		list1=temp;
	}
return head;
}