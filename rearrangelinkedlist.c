//rearrange given linked list in place 
1->2->3->4->5 
1->5->2->4->3

or 

1->2->3->4
1->4->2->3

struct node{
int data;
struct node* next;
};

node* newnode(int key){
 node* temp= new node;
temp->data= key;
temp->next= NULL;
return temp;
}

vois main(){
node * head= newnode(10);
head->next= newnode(11);
head->next->next= newnode(12);
.
.
.
node* list = rearrange(&head);
}
 
void rearrange(node** list)
{
	 node* slow= list;
	 node* fast= list;
	 node*  head= list;
	 // to split the list into 2 parts , get the mid point by tortoise and hare method 
	while(slow && fast && fast->next){
		slow=slow->next;
		fast=fast->next->next;
	}
	//broke into head , head2
	node* head2= slow->next;
	slow->next= NULL;
	// to reverse 2nd list i.e., head2
	struct node* curr=head2, *prev =NULL, *next;
	while(curr){
		next= curr->next;
		curr->next= prev;
		prev= curr;
		curr= next;
	}
	head2 = *prev; 
	
	node* head1= *head;
	node* temp= *head;
	while(head1 || head2 )
		/*
		temp= head->next;
		head->next=head2;
		head2= head2->next;
		head->next->next= head->next;
		head= head->next->next;*/
		//picks one from each list and combines them 
		if(head1){
			temp->next= head1;
			temp=temp->next;
			head1=head1->next;	
		}
		if(head2)
		{
			temp->next= head2;
			temp=temp->next;
			head2= head2->next;
		}
	}
	return head->next;
}