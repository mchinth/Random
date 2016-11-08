triangle sum: 
[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]

ans [2+3+ 5+ 1 =11] 
total = [4,1,8,3] 
total =[7,6, 10] 
total = [9,10]
total = [11]

who? 
assume ArrayList<ArrayList<Integer>>  list is passed 
l= list.size()-1;
for(int i=0;i< list.get(l).size();i++)
{
	total[i]= list.get(l).get(i);
}

for(int i=0;i<l-1;i++){
	for(int j =0;j< list.get(i).size();j++){
		total[j]= list.get(i).get(j) + Min(total[j] , total[j+1]);
	}
}
return total[ 0];