struct node{
int data;
struct node * next;
};

struct node *newNode(int key)
{
    struct node *temp = new struct node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
 
void main(){
	struct node *head = newNode(50);
	head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);
	
	//create loop for testing
	head->next->next->next->next->next = head->next->next;
	
	loop=detectAndRemoveLoop(&head);
	if(loop==1)
		loopexists;
	else
		noloop;
	
}

detectAndRemoveLoop(struct node *list){
	Struct Node * slow = list;
	Struct Node* fast=list;
	//slow should not be null, fast should not be null, and fast->next should not be null because if fast->next is null, fast->next->next throws error.
	while(slow && fast  && fast->next){
		slow=slow->next;
		fast= fast->next->next;
		if(slow==fast){
			removeloop(slow, list);
			return 1;
		}
	}
	return 0;
}
removeloop(struct node *loop, struct node *head)
{
	struct node *ptr1;
	struct node *ptr2;
	ptr1=head;
	while(1){
		ptr2=loop;
		//for each ptr1 check if ptr2 intersects , if it intersects that is where loop is 
		while(ptr2->next!=loop && ptr2->next!=ptr1 )
			ptr2= ptr2->next;
		//if while loop breaks because of reaching ptr1 that is the point where loop exists, break outer while loop and assign ptr2->next to NULL;
		if(ptr2->next== ptr1)
			break;
		//if the while loop breaks because of reaching ptr2 then increment ptr1 
		ptr1=ptr1->next;
		}
	//assign ptr2->next to NULL;this breaks the loop
	ptr2->next=NULL;  
	// since we are operating on same pointer no need to return anything
}

void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d  ", node->data);
        node = node->next;
    }
}
 