#include "getMonteCarloTrend.h"
#include "runMonteCarlo.h"
#include <cmath>
#include <vector>
#include <iostream>

// definition of the function
std::vector<double> getMonteCarloTrend(double Expiry,
						    double Strike,
						    double Spot,
						    double Vol,
						    double r,
						    unsigned long int NumberOfPaths,
						    double barrier){

  double exp = 0.0;
  std::vector<double> result;

  while (exp <= Expiry){
    result.push_back(runMonteCarlo(exp, Strike, Spot, Vol, r, NumberOfPaths, barrier));
    exp = exp + 0.1;
  }

  return result;

}
