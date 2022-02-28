#include "runMonteCarlo.h"
#include "getOneGaussianByBoxMueller.h"
#include <cmath>

// definition of the function
double runMonteCarlo(double Expiry,
						    double Strike,
						    double Spot,
						    double Vol,
						    double r,
						    unsigned long int NumberOfPaths,
						    double barrier
						    ){

	double variance = Vol * Vol * Expiry;
	double rootVariance = sqrt(variance);
	double itoCorrection = -0.5 * variance;

	double movedSpot = Spot * exp(r * Expiry + itoCorrection);
	double thisSpot;
	double runningSum = 0;
	bool hasReachedBarrier = false;

	for (unsigned long i = 0; i < NumberOfPaths; i++) {
		double thisGaussian = getOneGaussianByBoxMueller();
		thisSpot = movedSpot * exp(rootVariance * thisGaussian);
		if (thisSpot <= barrier) {
		  hasReachedBarrier = true;
		}
		double thisPayoff = hasReachedBarrier ? thisSpot - Strike: 0;
    	// thisPayoff = thisPayoff > 0 ? thisPayoff : 0;
    	if (thisPayoff>0) runningSum += thisPayoff;
	}

	double mean = runningSum / NumberOfPaths;
	// mean *= exp(-r * Expiry);
	mean = mean * exp(-r * Expiry);
	return mean;
}
