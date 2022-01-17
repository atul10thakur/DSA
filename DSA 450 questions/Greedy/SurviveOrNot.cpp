
void survive(int days ,int FoodCanBuyPerDay , int requireFoodPerDay){
	int sundays = days/7;
	days = days-sundays;
	int totalFoodrequired = days * requireFoodPerDay;
	int totalDays = totalFoodrequired /FoodCanBuyPerDay;
	if( totalFoodrequired % FoodCanBuyPerDay != 0 ) totalDays++;
	if(  totalDays <= 	days) cout<<"mar gya bro .." ;
	else cout<<"bach gya bro ... " 
}
