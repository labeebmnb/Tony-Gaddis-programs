#include<iostream>
#include<iomanip>
#include<string>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
int main()



/*miles per gallon.
{
	int gallons_car_hold =
		miles_travel_on_tank = 0;
	float miles_per_gallon = 0;
	cout << "enter the number of gallons a car can hold"<<endl;
	cin >> gallons_car_hold;
	cout << "enter the miles a car can cover on a tank " << endl;
	cin >> miles_travel_on_tank;
	miles_per_gallon = miles_travel_on_tank / gallons_car_hold;
	cout << "a car cover " << miles_per_gallon << " with a tank." << endl;
	return 0;
}*/




//stadium seating
/*{
	float class_a = 15,
		class_b = 12,
		class_c = 9,
		a_sold = 0,
		b_sold = 0,
		c_sold = 0,
		a_income = 0,
		b_income = 0,
		c_income = 0,
		total = 0,
		income = 0;
	cout << "how many seats were sold for A,B,C class.";
	cin >> a_sold >> b_sold >> c_sold;
	cout << "income from A class is $" << fixed << setprecision(2) << a_sold * class_a<<endl;
	cout << "income from B class is $" << fixed << setprecision(2) << b_sold * class_b<<endl;
	cout << "income from C class is $" << fixed << setprecision(2) << c_sold * class_c<<endl;
	total = (class_a*a_sold) + (class_b*b_sold) + (class_c*c_sold);
	cout <<"total income is $"<< fixed << setprecision(2) <<total;
	return 0;
}*/



//test average
/*{
	float subjects = 5, a = 0, b = 0, c = 0, d = 0, e = 0, avg = 0, sum = 0;
	//a,b,c,d,e are 5 subjects.
	cout << "whats your marks in a,b,c,d $ e.mention one by one."<<endl;
	cin >> a >> b >> c >> d >> e;
	sum = a + b + c + d + e;
	avg = sum / subjects;
	cout << "your average marks are " << fixed << setprecision(1) << avg;
	return 0;
}*/



//average rainfall
/*{
	string month_1, month_2, month_3;
	float	rain_a = 0, rain_b = 0, rain_c = 0, avg = 0;
	cout << "enter the names of three months." << endl;
	cin >> month_1;
	cin >> month_2;
	cin >> month_3;
	cout << "enter the amount of rain fell each month.\n";
	cin >> rain_a >> rain_b >> rain_c;
	avg = (rain_a + rain_b + rain_c) / 3;
	cout << "the average rain fall for " << month_1 << ", " << month_2 << ", " << month_3 << " is " << avg << " inches.";
}*/



//male and female percentage
/*{
	int males,
		females;

	float per_males,
		total,
		per_females;

	cout << endl;
	cout << "How many males in the class: ";
	cin >> males;
	cout << "How many females: ";
	cin >> females;
	cout << endl;

	total = males + females;

	per_males = (males / total) * 100;

	per_females = (females / total) * 100;

	// Display percentage
	//cout << setprecision(1) << fixed;
	cout << "There are " << total << " students." << endl;
	cout << "The percentage of males is %" << per_males;
	cout << ",\nwhile, the percentage of females is %";
	cout << per_females << ".\n" << endl;
	return 0;
}*/



//ingredient adjuster
/*{
float cup_of_sugar = 1.5,
cup_of_butter = 1.0,
cup_of_flour = 2.75,
sugar_needed = 0,
butter_needed = 0,
flour_needed = 0;
int cookies = 48,
cookies_wanna_make=0;

cout << "how many cookies you wanna make?";
cin >> cookies_wanna_make;
sugar_needed = (cup_of_sugar*cookies_wanna_make) / cookies;
butter_needed = (cup_of_butter*cookies_wanna_make) / cookies;
flour_needed = (cup_of_flour*cookies_wanna_make) / cookies;
cout << "you need " << sugar_needed << " cups of sugar," << butter_needed << " cups of butter and " << flour_needed << " cups of flour needed to make " << cookies_wanna_make << "cookies.";
return 0;
}*/



//box office
/*{
 string movie;
 float adults_p = 10,
	 child_p = 6,
	 n_adult = 0,
	 n_child = 0,
	 net_income = 0,
	 gross = 0,
	 profit = .30,
	 distributer=0;

 cout << "what is the movie?";
 cin >> movie;
 cout << "how many tickets sold of adult and child";
 cin >> n_adult >> n_child;
 net_income = (adults_p*n_adult) + (child_p*n_child);
 gross = net_income * profit;
 distributer = net_income-gross;
 cout << "movie name : " << movie<<endl;
 cout << "adult tickets sold : " << n_adult << endl;
 cout << "child tickets sold : " << n_child << endl;
 cout << "net income is : $ " << fixed << setprecision(2) << net_income << endl;
 cout << "gross income is : $ " << fixed << setprecision(2) << gross << endl;
 cout << "distributer : $ " << fixed << setprecision(2) << distributer;
 return 0;
}*/


//how many widgets
//{
//const float widget_weight = 12.5;
//int widgets_stacked = 0 ;
//float pallet_widget = 0, pallet_weight = 0, widgets = 0;
//cout << "enter the weight of pallet itself & weight of pallet with widgets.\n";
//cin >> pallet_weight >> pallet_widget;
//widgets_stacked = pallet_widget - pallet_weight;
//widgets = widgets_stacked / widget_weight;
//cout << widgets;
//return 0;
//}



//how many calories
//{
//int cookies = 30, serving = 10, calories = 300, cookies_eaten = 0, servings_eaten = 0;
//float calories_consumed = 0, servings_per_bag = 0;
//servings_per_bag = cookies / serving;
//cout << "enter the number of cookies eaten.\n";
//cin >> cookies_eaten;
//servings_eaten = cookies_eaten / servings_per_bag;
//calories_consumed = servings_eaten * calories;
//cout << calories_consumed;
//}


//how much insurance
//{
//const float PERCENT = 0.8;
//float replacement_cost = 0, insurance = 0;
//cout << "enter the number of replacement cost.\n";
//cin >> replacement_cost;
//insurance = replacement_cost * PERCENT;
//cout << insurance;
//return 0;
//}


//automobile costs
//{
//int loan_payment = 0, insurance = 0, gas = 0, oil = 0, tires = 0, maintanance = 0, total_monthly = 0, total_annual = 0;
//cout << "enter the monthly cost of loan,insurance,gas,oil,tires,maintanance.\n";
//cin >> loan_payment >> insurance >> gas >> oil >> tires >> maintanance;
//total_monthly = loan_payment + insurance + gas + oil + tires + maintanance;
//total_annual = total_monthly * 12;
//cout << "total monthly expenses are " << total_monthly << " and total annual expenses are " << total_annual;
//return 0;
//}


//celcius to fahrenheit
//{
//float F = 0, C = 0;
//cout << "enter the temp in celcius.\n";
//cin >> C;
//F =((9.0 / 5.0)*C) + 32;//what is this?
//cout << F;
//return 0;
//}


//currency
//{
//const float YEN_PER_DOLLAR = 98.93, EUROS_PER_DOLLAR = 0.74;
//float dollars = 0;
//cout << "enter the number of dollars.\n";
//cin >> dollars;
//cout << "dollars in yen " << fixed << setprecision(2) << dollars * YEN_PER_DOLLAR << " and dollars in euros is " << fixed << setprecision(2) << dollars * EUROS_PER_DOLLAR << endl;
//return 0;
//}


//monthly sales tax
//{
//const float STATE_SALES_TAX = 0.04, COUNTRY_SALE_TAX = 0.02,TOTAL_SALES_TAX=0.06;
//int year = 0;
//float T = 0, S = 0,country_sales_tax=0,state_sales_tax=0,total_sales_tax=0;
//string month;
//cout << "enter the month and year.\n";
//cin >> month >> year;
//cout << "enter the total amount collected at cash register.\n";
//cin >> T;
//
//
//S = T / 1.06;
//country_sales_tax = S * COUNTRY_SALE_TAX;
//state_sales_tax = S * STATE_SALES_TAX;
//total_sales_tax = S * TOTAL_SALES_TAX;
//
//cout << "month:" << month << endl;
//cout << "---------------------------" << endl;
//cout << "Total Collected" << "   $" << setw(10) << fixed << setprecision(2)<<T<<endl;
//cout << "Sales" << "             $" << setw(10) << fixed << setprecision(2) << S << endl;
//cout << "Country Sales Tax" << " $" << setw(10) << fixed << setprecision(2) << country_sales_tax<< endl;
//cout << "State Sales Tax" << "   $" << setw(10) << fixed << setprecision(2) << state_sales_tax << endl;
//cout << "total_sales_tax" << "   $" << setw(10) << fixed << setprecision(2) << total_sales_tax << endl;
//return 0;
//}



//property tax
//{
//const float ASSESSMENT_PERCENT = 0.60, PROPERTY_PERCENT = 0.75;
//int value_of_property = 0, assessment_value = 0, property_tax = 0;
//cout << "enter the actual value of property. ";
//cin >> value_of_property;
//assessment_value = value_of_property * ASSESSMENT_PERCENT;
//property_tax = (assessment_value/100) * PROPERTY_PERCENT;
//cout << "assessment value is $" << assessment_value << endl;
//cout << "property tax is " << property_tax << "%" << endl;
//return 0;
//}


//senior citizen property tax
//{
//const float ASSESSMENT_VALUE = 0.60;
//float actual_value_of_property = 0, current_tax_rate = 0, annual_property_tax = 0, quaterly_tax = 0;
//cout << "enter the value of property ";
//cin >> actual_value_of_property;
//cout << "enter the current tax rate ";
//cin >> current_tax_rate;
//annual_property_tax = (((actual_value_of_property*ASSESSMENT_VALUE) - 5000) / 100)*current_tax_rate;
//quaterly_tax = annual_property_tax / 4;
//cout << "annual property tax will be $" << annual_property_tax << endl << "quaterly tax will be $" << quaterly_tax << endl;
//return 0;
//}


//math tutor
//{
//int numb1 = 0, numb2 = 0, sum = 0;
//srand(time(0));
//numb1= 1 + rand() % 10;
//numb2= 1 + rand() % 10;
//sum = numb1 + numb2;
//cout << "   " << numb1 << endl << "+  " << numb2 << endl << "--------";
//cin.get();
//cout << "  " <<sum << endl;
//return 0;
//}


//interest earned
//{
//	float principal = 0, rate = 0, amount = 0, T = 0, total_interest = 0;
//	cout << "enter the principal ";
//	cin >> principal;
//	cout << "enter the interest rate ";
//	cin >> rate;
//	cout << "enter the number of times the interest is compound ";
//	cin >> T;
//	rate /= 100;
//	amount = principal * pow((1 + (rate / T)), T);
//	total_interest = amount - principal;
//	rate *= 100;
//
//	cout << "interest rate:             " << setw(9) << fixed << setprecision(2) << rate << endl;
//	cout << "times compounded:          " << setw(9) << fixed << setprecision(2) << T << endl;
//	cout << "principal:                 " << setw(9) << fixed << setprecision(2) << principal << endl;
//	cout << "interest:                  " << setw(9) << fixed << setprecision(2) << total_interest << endl;
//	cout << "amount in savings:         " << setw(9) << fixed << setprecision(2) << amount << endl;
//	return 0;
//}

//monthly payments
//{
//float rate = 0, annual_interest = 0, L = 0, payment = 0, interest_paid = 0, N = 0, monthly_payment = 0, amount_paid = 0;
//cout << "enter the amount of loans ";
//cin >> L;
//cout << "enter the number of payments ";
//cin >> N;
//cout << "enter the annual interest ";
//cin >> annual_interest;
//rate = annual_interest / 12;
//rate /= 100;
//payment = ((rate*pow((1 + rate), N)) / (pow((1 + rate), N) - 1))*L;
//rate *= 100;
//monthly_payment = N / 12;
//amount_paid = N*payment;
//interest_paid = amount_paid - L;
//cout << "loan payment:              $" << setw(10) << fixed << setprecision(2) << L << endl;
//cout << "monthly interest rate:     $" << setw(10) << fixed << setprecision(2) << rate << endl;
//cout << "number of payments:        $" << setw(10) << fixed << setprecision(2) << N << endl;
//cout << "monthly payment:           $" << setw(10) << fixed << setprecision(2) << monthly_payment << endl;
//cout << "amount paid back:          $" << setw(10) << fixed << setprecision(2) << amount_paid << endl;
//cout << "interest paid:             $" << setw(10) << fixed << setprecision(2) << interest_paid << endl;
//return 0;
//}


//labeeb's pizza & how many pizzas
//{
//const float PI = 3.14159, SLICE = 14.125;
//const int AVG = 4;
//float r = 0, a, d = 0,slices=0,pizza=0;
//int persons = 0;
//cout << "enter the number of persons who are attendin the party. ";
//cin >> persons;
//cout << "enter the diameter of pizza in inches ";
//cin >> d;
//r = d / 2;
//a = PI * pow(r, 2);
//slices = a / SLICE;
//pizza = (persons*AVG) / slices;
//cout << "a pizza of diameter " << d << " can be divided into " <<fixed<<setprecision(2)<< slices << " slices."<<endl;
//cout << "You have to buy " << pizza << " pizzas for " << persons << " persons" << endl;
//return 0;
//}


//angle calculator
//{
//float angle = 0;
//cout << "enter the angkes n radians ";
//cin >> angle;
//cout << fixed << setprecision(2) << sin(angle) << endl << cos(angle) << endl << tan(angle) << endl;
//return 0;
//}


//stock transaction program
//{
//const float BROKER_COMMISSION = 0.02,
//PAID = 45.50,
//SOLD = 56.90;
//
//int shares = 1000;
//float paid = 0, sold = 0, paid_commission = 0, sold_commission = 0, profit = 0;
//paid = PAID*shares;
//sold = SOLD * shares;
//paid_commission = paid * BROKER_COMMISSION;
//sold_commission = sold* BROKER_COMMISSION;
//profit = (sold - (sold_commission + paid_commission)) - paid;
//cout << "paid              :" << paid << endl;
//cout << "sold              :" << sold << endl;
//cout << "paid sommission   :" << paid_commission << endl;
//cout << "sold commission   :" << sold_commission << endl;
//cout << "profit            :" << profit << endl;
//return 0;
//
//}


//word game
//{
//int age = 0;
//string name, city, college, proffession, animal, pet;
//cout << "enter your name. ";
//getline(cin, name);
//cout << "enter your age. ";
//cin >> age;
//cout << "enter your city name. ";
//cin >> city;
//cout << "enter the name of your college. ";
//getline(cin, college);
//cin.get();
//cout << "enter your proffession. ";
//getline(cin, proffession);
//cin.get();
//cout << "enter type of animal. ";
//getline(cin, animal);
//cin.get();
//cout << "enter pet's name. ";
//getline(cin, pet);
//cin.get();
//
//cout << endl;
//cout << endl;
//cout << endl;
//cout << endl;
//cout << endl;
//cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << "," << name << " went to college at " << college << "." << name << " graduated and went to work as a " << proffession << ". Then, " << name << "adopted a(n) " << animal << " named " << pet << ". They both lived happily ever after!" << endl;
//}