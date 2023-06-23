// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// neglikgrad
List neglikgrad(const arma::colvec& Omega, const arma::colvec& D, const arma::mat& G, const arma::mat& E, const double pi1);
RcppExport SEXP _caseControlGE_neglikgrad(SEXP OmegaSEXP, SEXP DSEXP, SEXP GSEXP, SEXP ESEXP, SEXP pi1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type G(GSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type E(ESEXP);
    Rcpp::traits::input_parameter< const double >::type pi1(pi1SEXP);
    rcpp_result_gen = Rcpp::wrap(neglikgrad(Omega, D, G, E, pi1));
    return rcpp_result_gen;
END_RCPP
}
// neghess
arma::mat neghess(const arma::colvec& Omega, const arma::colvec& D, const arma::mat& G, const arma::mat& E, const double pi1);
RcppExport SEXP _caseControlGE_neghess(SEXP OmegaSEXP, SEXP DSEXP, SEXP GSEXP, SEXP ESEXP, SEXP pi1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type G(GSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type E(ESEXP);
    Rcpp::traits::input_parameter< const double >::type pi1(pi1SEXP);
    rcpp_result_gen = Rcpp::wrap(neghess(Omega, D, G, E, pi1));
    return rcpp_result_gen;
END_RCPP
}
// hesszeta
List hesszeta(const arma::colvec& Omega, const arma::colvec& D, const arma::mat& G, const arma::mat& E, const double pi1);
RcppExport SEXP _caseControlGE_hesszeta(SEXP OmegaSEXP, SEXP DSEXP, SEXP GSEXP, SEXP ESEXP, SEXP pi1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type G(GSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type E(ESEXP);
    Rcpp::traits::input_parameter< const double >::type pi1(pi1SEXP);
    rcpp_result_gen = Rcpp::wrap(hesszeta(Omega, D, G, E, pi1));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_caseControlGE_neglikgrad", (DL_FUNC) &_caseControlGE_neglikgrad, 5},
    {"_caseControlGE_neghess", (DL_FUNC) &_caseControlGE_neghess, 5},
    {"_caseControlGE_hesszeta", (DL_FUNC) &_caseControlGE_hesszeta, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_caseControlGE(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}