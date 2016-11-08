int num
small= { "zero", "one" , ..... "ninteen"};
tens = {"", "twenty" ,... "ninty"};
hundred= "hundred";
big ={ "","thousand" , "million", "billion"};
String convert(int num){
if(num ==0){
	return small[0];
}
else if (num <0){
	return negative+ "" + convert(-1*num);
}
//coming LSB to MSB
LinkedList<String> parts = new LinkedList<String>();
int chunkCount =0;
   while(num>0){
	if(num %1000 !=0){
	   String chunk = convertChunk(num%1000) + "" +big[chunckCount]; 
	   parts.addFirst(chunck); 
	}
	num /=1000;
	chunckCount++;
    }
}

convertChunk(int n){
	LinkedList<String> parts = new LinkedList<String>();
	if(n> =100){
	parts.addLast(smalls[number/100])
	parts.addLast(hundred);
	n =n%100;
		if(n>=10 && n <20)
			parts.addLast(smalls[n]);
		else
			parts.addLast(tens[number/10]) ;
			n =n%10;
		if(n>=1 && n<=9){
		parts.addLast(small[n]);
}
return listToString(parts);
}
}
