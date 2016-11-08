//in order traversal
struct node{
int data;
struct node *left;
struct node * right;
}

Node *newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->left = temp->right = NULL;
    return temp;
}
 
struct node* insert(struct node * root,int key){

if(root==NULL)
	return newNode(key);
	
else 
if(key < root->data)
	insert(root->left, key);
else 
	insert(root->right, key);
	
return root;
}

void main(){
struct node* root= NULL;
root= insert(root, 2);
root= insert(root ,4);
. 
.
.

Inorder(root);
preorder(root);
printcommon(root1,root2);
}

Inorder(struct node* root){
if(root){
	Inorder(root->left);
	printf("%d", root->data);
	Inorder(root->right);
	}
}

Preorder(struct node* root){
printf("%d", root->data);
if(root->left!=NULL)
	preorder(root->data);
if(root->right !=NULL)
	preorder(root->right);
	}
	
printcommon(struct node * root1, struct node* root2){
	stack<Node *> stack1, s1, s2;
	while(1){
		if(root1)
		{
			s1.push(root1);
			root1=root1->left;
		}
		else if(root2)
		{
			s2.push(root2);
			root2=root2->left;
		}
		else if(!s1.empty && !s2.empty)
		{
		
		}
	
	}
}