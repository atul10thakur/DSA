

struct petrolPump{
	int petrol;
	int distance;
};

int tour(petrolPump p[],int n)
    {
       int start = 0;
       int extraFuel = 0;
       int fuelRequired = 0;
       for(int i =0 ; i<n ; i++){     // checking for all points 
           extraFuel += (p[i].petrol - p[i].distance);  
           if(extraFuel < 0){        // if fuel become less then zero then from start to thaat point wre cant travel back to initial position
               start = i+1;            // so therfore changing the start postion to the next postion 
               fuelRequired += extraFuel ;    // fuelrequied ..
               extraFuel = 0;
           }
       }
       if(extraFuel+fuelRequired >= 0){      // whatever start we find checking whether its posssible to travel or not ....
           return start;
       }else{
           return -1;
       }
    }
