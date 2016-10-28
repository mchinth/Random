//Hash Set custom implementation in Java 
// uses implementatin of HashMap Custom
class HashSetCustom<E> {
	private HashMapCustom<E, Object> hashMapCustom;
	public HashSetCustom(){
		hashMapCustom = new HashMapCustom<>();
	}
	public void add( E value){
		hashMapCustom.put(value, null);
	}
	public boolean contains(E obj){
		return hashMapCustom.get(obj)!=null ? true : false;
	}
	public boolean remove(E obj){
		return hashMapCustom.remove(obj);
	}
	public boolean displaySet(){
		hashMapCustom.displaySet();
	}
}