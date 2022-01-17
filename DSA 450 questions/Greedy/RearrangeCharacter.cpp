
// str = " aaabbc " 
// rearrange can be " ababac "
// O/P - true

// str = aaaabc
// rearrange = "abacaa" O/P -false since consecutive chr. appers

bool RearrangeCharacter(stringg str , int l){
	unorder_map<int , int>m;  // store freqency of char.
	int max_freq =0 ;      // max freqency ... 
	for(int i = 0 ; i<l ; i++){    
		m[str[i]]++;               
		if(max_freq < m[str[i]]){        // update max_freqency ....
			max_freq = m[str[i]] ;
		}
	}
	if(max_freq <= l -max_freq+1){     // check if arrangement can be done or not 
		return true;
	}
	else{
		return false;
	}
	
}
