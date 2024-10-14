#include <iostream>

using namespace std;

int main()
{
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	cout << "SEVENPM sari-sari store\n";
	cout <<"Enter Sugar price USD : ";
	cin >> sugarPriceUSD;
	cout <<"Enter Rice price in pound : ";
	cin >> ricePricePound;
	cout <<"Enter Sardines price in pound : ";
	cin >> sardinesPricePound;
	cout <<"Enter Coffee price in USD : ";
	cin >> coffeePriceUSD;
	cout <<"Enter Milk price in USD : ";
	cin >> milkPriceUSD;
	cout << "******************************************************************\n";
	//quantity
	cout << "enter quantity for sugar : ";
	cin >> sugarQty;
	cout << "enter rice quantity : ";
	cin >> riceQty;
	cout << "enter sardines quantity : ";
	cin >> sardinesQty;
	cout << "enter coffee quantity : ";
	cin >> coffeeQty;
	cout << "enter milk quantity : ";
	cin >> milkQty;
	cout << "******************************************************************\n";
	//currency convertion
	float usdToPhp = 57.28, poundToPhp = 74.75;
	float totalCostPHP, sugarCostPHP, riceCostPHP, sardinesCostPHP, coffeeCostPHP, milkCostPHP;
	//calculation
	sugarCostPHP = (sugarPriceUSD * usdToPhp) * sugarQty;
	riceCostPHP = (ricePricePound * poundToPhp) * riceQty;
	sardinesCostPHP = (sardinesPricePound * poundToPhp) * sardinesQty;
	coffeePriceUSD = (coffeePriceUSD * usdToPhp) * coffeeQty;
	milkPriceUSD = (milkPriceUSD * usdToPhp) * milkQty;
	totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP, milkCostPHP;
	//output 
	cout << "Purchase Details\n";
	cout << "sugar quantity" << sugarQty <<endl;
	cout << "rice quantity" << riceQty <<endl;
	cout << "sardines quantity" << sardinesQty <<endl;
	cout << "coffee quanity" << coffeeQty <<endl;
	cout << "milk quantity" << milkQty <<endl;
	cout << "total cost in PHP : " <<totalCostPHP <<endl;
	return 0;
}
	