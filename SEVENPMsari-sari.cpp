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
        sugarCostPHP = (sugarPriceUSD * sugarQty) * usdToPhp;
        riceCostPHP = (ricePricePound * riceQty) * poundToPhp;
        sardinesCostPHP = (sardinesPricePound * sardinesQty) * poundToPhp;
        coffeeCostPHP = (coffeePriceUSD * coffeeQty) * usdToPhp;
        milkCostPHP = (milkPriceUSD * milkQty) * usdToPhp;
        totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP, milkCostPHP;
        //output 
        cout << "1$ = PHP57.28\n";
        cout << "1Pound = PHP74.75\n";
        cout << "Purchase Details\n";
        cout << "sugar quantity    : " << sugarQty << "  total cost : " << sugarCostPHP <<endl;
        cout << "rice quantity     : " << riceQty << "  total cost : " << riceCostPHP <<endl;
        cout << "sardines quantity : " << sardinesQty << "  total cost : " << sardinesCostPHP <<endl;
        cout << "coffee quanity    : " << coffeeQty << " total cost : " << coffeeCostPHP  <<endl;
        cout << "milk quantity     : " << milkQty << "  total cost : " << milkCostPHP <<endl;
        cout << "total amount to be paid : PHP" <<totalCostPHP <<endl;
        return 0;
}
