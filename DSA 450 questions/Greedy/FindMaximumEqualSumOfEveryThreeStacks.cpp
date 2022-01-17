

// a[], b[], c[] are stacks and aSum , bSum ,cSum are sum of all numbers respectivly ..

int StackSum(int a[] , int b[] , int c[] , int aSum , int bSum, int cSum , int size1 , int size2 , int size3){
	
	int top1 = 0, top2 = 0 , top3 = 0;
	int ans = 0;
	while(true){
		if(top 1== size1 || top2 == size2 || top3 == size3 ) // if the top is greater then its bootom or last elements
		{
			ans = 0;
			break;
		}
		if( aSum == bSum && bSum == cSum ){       // if  we find equall sum in all stack ...
			ans = 1;
			break;
		}
		// now just check the stack sum with greater value , then remove the top elemet from the stack and dreacrease the sum value 
		if(aSum >= bSum && aSum >= cSum ){          
			aSum-=a[top1];
			top1++;
		}
		else if(bSum >= aSum && bSum >= cSum ){
			bSum-=b[top2];
			top2++;
		}
		else if(cSum >= bSum && cSum >= aSum ){
			cSum-=c[top3];
			top3++;
		}
	}
	return ans;
	
}
