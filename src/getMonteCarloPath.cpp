#include "getMonteCarloPath.h"
#include "getOneGaussianByBoxMueller.h"
#include <cmath>
#include <vector>

std::vector<double> getMonteCarloPath(
                          double Expiry,
                          double Strike,
                          double Spot,
                          double Vol,
                          double r,
                          unsigned long int NumberOfPaths
){
  double variance = Vol * Vol * Expiry;
  double rootVariance = sqrt(variance);
  double itoCorrection = -0.5 * variance;

  double movedSpot = Spot * exp(r * Expiry + itoCorrection);
  double thisSpot;
  double runningSum = 0;
  bool hasReachedBarrer = false;
  std::vector<double> path;

  for (unsigned long i = 0; i < NumberOfPaths; i++) {
    double thisGaussian = getOneGaussianByBoxMueller();
    thisSpot = movedSpot * exp(rootVariance * thisGaussian);
    path.push_back(thisSpot);
  }
  return path;
}
