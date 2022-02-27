#include <Rcpp.h>
#include "runSimpleMonteCarlo.h"

using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
double getCallPrice(
    double Expiry = 0.5,
    double Strike = 100,
    double Spot   = 105,
    double Vol    = 0.22,
    double r      = 0.05,
    unsigned long NumberOfPaths = 10000,
    double barrier = 150){
  double result = runSimpleMonteCarlo(Expiry,
                                       Strike,
                                       Spot,
                                       Vol,
                                       r,
                                       NumberOfPaths,
                                       barrier);

	return result;
}


