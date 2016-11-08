BST with different test cases which returns tree is BST or not.
class Tree{
    Private Node root; 
    Tree(int x){
	root= new Node(x);
    }
    public Node getRoot(){
	return root;
    }
    addchild(Node parent , Node child, String orientation){
    	if(orientation.equals("left"){
	   parent.left = child;
 	}
	else {
	   parent.right = child;
	}
    }
    class Node{
	int data;
	Node left;
	Node right;
	Node(int x){
	  this.data= x;
	  this.left = NULL;
          this.right = NULL;
	  }
    }
}
public class Test{
 public static int index;
public static void main(String args[]){
    index =0;
    Node n1= new Node(5);
    Node n2 = new Node(6);
    Node n3 = new Node(9);
    
    BinaryTree t1 = new Binarytree(7);
    root = t1.getRoot();
    t1.addchild(root, n2,"left");
    t1.addchild(root, n3, "right");
....
    // lets assume you know length of BT 
    checkBST(root, array[]);
    }
    boolean checkBST(Node root, int array[]){
	if(root ->left !=NULL){
		checkBST(root->left);
	}
	array[index] = root->data;
        if(array[index] < array[index-1]{
		return false;
	}
	index++;
	if(root->right != NULL){
		checkBST(root->right);
	}	
    }