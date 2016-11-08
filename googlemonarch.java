class Monarch{
birth(child, parent)
death(name, date)
}
Class MonarchImp implements Monarch{
    private Node root;
    Monarch(String name){
	root = new Node(name);
    }
    getRoot(){
	return root;
    }
    searchNode(String name){
	//BST(String name); 
	if(root.data.equals(name){
		return root;
	}
	else{
		Node temp ;
		Queue q = new Queue();
		q.add(root);
		while(q != NULL){
			temp  = q.pop();
			if(temp.data.equals(name))
				return temp;
			for(Node n : t.children){
				q.add(n);
			}	
		}
	}
	return null;
    }
    Birth(String child, String parent){
	Node parent =searchNode(parent);
	Node child  new Node(child);
	parent.children.add(child);
    }
    Death(String person , Date date){
	Node person = searchNode(person);
	person.death_date = date;
    }

}
class Node{
    String name ;
    boolean isAlive;
    Date death_date;
    ArrayList<Node> children;
    Node(String name){
     	this.name = name;
 	this.isAlive = true;
	this.children = new ArrayList<Node>();
    }
}

class Test{
	public static void main(String args[]){
	 	Monarch m = new MonarchImp("Luther1");
		//Node n1 =  new Node("Luther2");
		//Node new = new Node("Lutehr3");
		//root = getRoot();
		m.Birth("luther3", "luther5");
		m.Death("luther5" , "09/18/2013");	
}