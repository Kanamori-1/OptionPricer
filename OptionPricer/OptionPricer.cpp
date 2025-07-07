// OptionPricer.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "OptionPricer.h"
#include "src/Product/AsianOption.h"
#include "src/Product/EuropeanOption.h"

using namespace std;

int main()
{
	cout << "Asian Option Pricer" << endl;
	// Create an Asian option with a strike price of 100, maturity of 1 year, and 12 observations
	AsianOption asianOption(100.0, 1.0, 12);
	// Output the details of the Asian option
	cout << "Strike Price: " << asianOption.getStrike() << endl;
	cout << "Maturity: " << asianOption.getMaturity() << " years" << endl;
	cout << "Number of Observations: " << asianOption.getNumObservations() << endl;
	
	cout << "Pricing the Asian option..." << endl;
	
	EuropeanOption europeanOption(100.0, 1.0, 12);

	cout << "European Option Pricer" << endl;
	cout << "Strike Price: " << europeanOption.getStrike() << endl;
	cout << "Maturity: " << europeanOption.getMaturity() << " years" << endl;
	cout << "Pricing the European option..." << endl;
	// Here you would typically call a pricing method for the European 

	return 0;
	
}
