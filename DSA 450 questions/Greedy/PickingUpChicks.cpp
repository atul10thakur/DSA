

// n is no. chicks we have 
// k no. of chicks we want inside the barn
// t is time required
// x[n] distance needed to cover for every chicks
// v[m] speed of each chick 
// count no. of chicks can get to barn 
// not_possible  no. of chicks can't get to barn
// swap no. of swaps required ...

int Chicks(int n , int k , int t , x[n] , v[m] , int size){
	int swap = 0;
	int count = 0 , not_possible = 0;
	
	for(int i = n-1 ; i>=0 ; i-- ){
		int distance_needed = x[i] ; 
		int distance_can_cover = v[i] * t;
		if(distance_needed <= distance_can_cover){  // if chicks can  get to barns
			count++;
			if(not_possible){         // swap with chicks who can reach the barn 
				swap+= not_possible;
			}
		}
		else{
			not_possible++;      // chicks can't reach the barn...
		}
		if(count >= k){   // we have the k chicks inside the barns
			break
		}
	}
}
