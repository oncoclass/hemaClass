// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// RMA_sum
Rcpp::List RMA_sum(arma::mat x2, Rcpp::List probesets, CharacterVector order, CharacterVector colnames);
RcppExport SEXP hemaClass_RMA_sum(SEXP x2SEXP, SEXP probesetsSEXP, SEXP orderSEXP, SEXP colnamesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type x2(x2SEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type probesets(probesetsSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type order(orderSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type colnames(colnamesSEXP );
        Rcpp::List __result = RMA_sum(x2, probesets, order, colnames);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// RMA_norm
Rcpp::List RMA_norm(const NumericMatrix x2, arma::vec quantile2, int generateQuan);
RcppExport SEXP hemaClass_RMA_norm(SEXP x2SEXP, SEXP quantile2SEXP, SEXP generateQuanSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericMatrix >::type x2(x2SEXP );
        Rcpp::traits::input_parameter< arma::vec >::type quantile2(quantile2SEXP );
        Rcpp::traits::input_parameter< int >::type generateQuan(generateQuanSEXP );
        Rcpp::List __result = RMA_norm(x2, quantile2, generateQuan);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// userRMA
Rcpp::List userRMA(const NumericMatrix x2, Rcpp::List probesets, CharacterVector colnames, NumericVector quantile, NumericVector alpha);
RcppExport SEXP hemaClass_userRMA(SEXP x2SEXP, SEXP probesetsSEXP, SEXP colnamesSEXP, SEXP quantileSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericMatrix >::type x2(x2SEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type probesets(probesetsSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type colnames(colnamesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type quantile(quantileSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP );
        Rcpp::List __result = userRMA(x2, probesets, colnames, quantile, alpha);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
