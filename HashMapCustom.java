//Hash Map custom implementation in Java 
class HashMapCustom<K, V>{
	private Entry<K,V> [] table; // bucket of type entry- array
	private int capacity =4;
	static class Entry<K,V> { // static 
		K key ;
		V value;
		Entry<K,V> next;
		Entry(K key, V value, Entry next){
			this.key = key;
			this.value = value;
			this.next = next;
		}
	}
	HashMapCustom (){
		// create bucket of type obj entry with capacity 
		table = new Entry[capacity]; 
	}

	//complexity - varies tarverse linkedlist
	public void put(K newkey, V value){
		// error checking , else returns divideByZero error in hash(newkey) call 
		if ( newkey == null){
			return null; 
		}
		// calculate hash of the key 
		int index = hash(newkey); // which is bucket-index

		// create the new object 
		Entry< K, V> newEntry =  Entry(newkey , value, null );

		// if it is first entry in the bucket-index 
		if(table[index] == null){
			table[index] = newEntry;
		}
		else{
			//traverse linked list  and insert it at the end 
			Entry<K, V> previous = null ;
			Entry<K, V> current = table[index] ;
			while ( current!= null){  
				// check if there is any entry with given key 
exists  , in such a case replace it will new entry and return
				if(current.key.equals(newkey)){ 
					// if the replacing key is first /head assign it to table 
					if(previous == null){
						newEntry.next = current.next;
						table[index]= newEntry;
						return;
					}
					// else just replace and return 
					else{
						newEntry.next = current.next;
						previous.next = newEntry;
						return;
					}	
				}
				// if there is no such key just traverse to end 
				previous = current;
				current = current.next;
			}
			previous.next = newEntry;
			// can reduce the complexity of insertion by inserting it at the begining 
		}

	}

	// complexity - varies traverse linkedlist
	public V get(K newkey){
		if(newkey == null){
			return null;
		}
		int index = hash(newkey);
		if(table[index] == null)
			return null;
		else{
			Entry<K,V> current = table[index];
			while(current != null){
				if(current.key.equals(newkey)){
					return current.value;
				}
				current = current.next;
			}
		}
		return null;
	}


	public boolean remove (K deleteKey){
		int index = hash(deleteKey);
		if(table[index] == null ){
			return false;
		}
		else{
			Entry<K,V> previous = null;
			Entry<K,V> current = table[index];
			while(current != NULL){
				// don't forget to assign nextkey to bucket if it is first /head 
				if(current.key.equals(deleteKey) ){
					if(previous == NULL){
						table[index]= current.next;
						return true;
					}
					else{
						previous.next  = current.next; 
						return true;
					}	
				}
				previous = current;
				current = current.next;
			}
		return false;	
		}
	}

	private int  hash (K key){
		int index = (key.hashCode()) % capacity ;
		return Math.abs(index);
	}

	public int display(){
		for(int i =0;i< capacity; i++){
			if(table[i] !=NULL){
				Entry<K,V> temp = table[i];
				while(temp != null){
					System.out.prinltn( temp.key +" :- "+ temp.value );
					temp = temp.next;
				}
			}
		}
	}

	 public K contains(K key){
        int index = hash(key);
        if(table[index] == null){
         return null;
        }else{
         Entry<K,V> temp = table[index];
         while(temp!= null){
             if(temp.key.equals(key))
                 return key;
             temp = temp.next; //return value corresponding to key.
         }         
         return null;   //returns null if key is not found.
        }
    }
 
 

	public boolean  containsObj(Entry<K,V> obj){
		int index = hash(obj.key);
		if(table[index] == null){
			return false;
		}
		else{
			Entry<K,V> temp = table[index];
			while(temp != NULL){
				if(temp.key.equals(obj.key) ){
					if(temp.value.equals(obj.value)){
						return true;
					}
					else
						return false;
				}
				temp = temp.next;
			}
		}
		return false;
	}

	public void displaySet(){
		for(int i=0;i< capacity;i++){
			if(table[i]!=NULL){
				Entry <K,V > temp = table[i];
				while(temp !=NULL){
					System.out.prinltn(temp.key);
					temp = temp.next;
				}
			}
		}

	}
}

