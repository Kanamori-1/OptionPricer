#pragma once

class AsianOption {
private:
	double _strike;          // Strike price of the option
	double _maturity;        // Maturity time of the option
	int _numObservations;    // Number of observations for averaging
	// Private methods can be added here if needed

public:
	AsianOption(double strike, double maturity, int numObservations);
	double getStrike() const;
	double getMaturity() const;
	int getNumObservations() const;

};
