#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
void print_matrix_cpp(S4 mat) {
  
  // Read in the slots of input matrix
  CharacterVector type = mat.slot("class");
  IntegerVector dims = mat.slot("Dim");
  NumericVector i = mat.slot("i");
  NumericVector p = mat.slot("p");
  NumericVector x = mat.slot("x");
  
  // Print out the slots of input matrix
  Rcout << "Type:   " << type << std::endl;
  Rcout << "Dim:    " << dims << std::endl;
  Rcout << "Length of i: " << i.size() << std::endl;
  Rcout << "Value of i:  " << i << std::endl;
  Rcout << "Length of p: " << p.size() << std::endl;
  Rcout << "Value of p:  " << p << std::endl;
  Rcout << "Length of x: " << x.size() << std::endl;
  Rcout << "Value of x:  " << x << std::endl;
  
}

/*** R
library(Matrix)
(x <- rsparsematrix(10, 10, .05))
print_matrix_cpp(x)
*/
