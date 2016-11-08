fizz buzz - 3 ,5 , 3&5 



class FizzBuzz extends Thread{
	int n;
	static int current;
	div3;div5, toPrint;
	FizzBuzz(div3, div5, max , toPrint){
		this.div3 =div3;
		this.dive5= div5;
		this.n = max;
		this.toPrint=toPrint;
	}
	run(){
		while(true){
			synchronized(lock){
			   if(current > max){
				return;
			   }
		           if(current%3 == 0) == div3 && (current%5 ==0) == div5){
				print();
				current++;
			}
		}
		
	}
	
	print(){
		system.out.prinltn(toPrint);
}



class Test{
	main(){
		Thread[] threads= new fizzbuzz(true, true , n, "fizzbuzz"),
				new fizzbuzz(true, false ,n , "fizz");
				;;
		for(Thread thread : threads){
			thread.start();
		}
		
	}
}
