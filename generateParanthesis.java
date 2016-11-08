generate paranthesis (int n){
	ArrayList<String> result = new ArrayList<String> ();
	result.add("");
	for (int i=1 ;i< n;i++){
		brackets(result, s,i,i))

		
}

brackets(result ,s,l,r){
if(l>r){
	return;
}
elseif(l== 0 && r==0)
	result.add(s);
	return;
}
if( l > 0 ){
	s = s+ "("	
	brackets(result,s, l-1,r);
}
if(r>0){
	s= s+")";
	brackets(result ,s,l,r-1);
}

(())