#include <Rcpp.h>
#include "runMonteCarlo.h"
#include "getMonteCarloTrend.h"
#include <vector>

using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
double runMonteCarlo1(
    double Expiry = 0.5,
    double Strike = 100,
    double Spot   = 105,
    double Vol    = 0.22,
    double r      = 0.05,
    unsigned long NumberOfPaths = 10000,
    double barrier = 150){
  double result = runMonteCarlo(Expiry,
                                       Strike,
                                       Spot,
                                       Vol,
                                       r,
                                       NumberOfPaths);

	return result;
}

// [[Rcpp::export]]
std::vector<double> getMonteCarloTrend1(
    double Expiry = 0.5,
    double Strike = 100,
    double Spot   = 105,
    double Vol    = 0.22,
    double r      = 0.05,
    unsigned long NumberOfPaths = 10000,
    double barrier = 150){
  std::vector<double> result = getMonteCarloTrend(Expiry,
                                Strike,
                                Spot,
                                Vol,
                                r,
                                NumberOfPaths);

  return result;
}
