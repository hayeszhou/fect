// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../src/fect.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// loglh
double loglh(arma::mat Y_fit, arma::mat Y);
RcppExport SEXP _fect_loglh(SEXP Y_fitSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y_fit(Y_fitSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(loglh(Y_fit, Y));
    return rcpp_result_gen;
END_RCPP
}
// loglh_ub
double loglh_ub(arma::mat Y_fit, arma::mat Y, arma::mat I);
RcppExport SEXP _fect_loglh_ub(SEXP Y_fitSEXP, SEXP YSEXP, SEXP ISEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y_fit(Y_fitSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    rcpp_result_gen = Rcpp::wrap(loglh_ub(Y_fit, Y, I));
    return rcpp_result_gen;
END_RCPP
}
// data_ub_adj
arma::mat data_ub_adj(arma::mat I_data, arma::mat data);
RcppExport SEXP _fect_data_ub_adj(SEXP I_dataSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type I_data(I_dataSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(data_ub_adj(I_data, data));
    return rcpp_result_gen;
END_RCPP
}
// XXinv
arma::mat XXinv(arma::cube X);
RcppExport SEXP _fect_XXinv(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(XXinv(X));
    return rcpp_result_gen;
END_RCPP
}
// panel_beta
arma::mat panel_beta(arma::cube X, arma::mat xxinv, arma::mat Y, arma::mat FE);
RcppExport SEXP _fect_panel_beta(SEXP XSEXP, SEXP xxinvSEXP, SEXP YSEXP, SEXP FESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xxinv(xxinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type FE(FESEXP);
    rcpp_result_gen = Rcpp::wrap(panel_beta(X, xxinv, Y, FE));
    return rcpp_result_gen;
END_RCPP
}
// Y_demean
List Y_demean(arma::mat Y, int force);
RcppExport SEXP _fect_Y_demean(SEXP YSEXP, SEXP forceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    rcpp_result_gen = Rcpp::wrap(Y_demean(Y, force));
    return rcpp_result_gen;
END_RCPP
}
// fe_add
List fe_add(arma::mat alpha_Y, arma::mat xi_Y, double mu_Y, int T, int N, int force);
RcppExport SEXP _fect_fe_add(SEXP alpha_YSEXP, SEXP xi_YSEXP, SEXP mu_YSEXP, SEXP TSEXP, SEXP NSEXP, SEXP forceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type alpha_Y(alpha_YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi_Y(xi_YSEXP);
    Rcpp::traits::input_parameter< double >::type mu_Y(mu_YSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    rcpp_result_gen = Rcpp::wrap(fe_add(alpha_Y, xi_Y, mu_Y, T, N, force));
    return rcpp_result_gen;
END_RCPP
}
// panel_est
arma::mat panel_est(arma::cube X, arma::mat Y, arma::mat MF);
RcppExport SEXP _fect_panel_est(SEXP XSEXP, SEXP YSEXP, SEXP MFSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MF(MFSEXP);
    rcpp_result_gen = Rcpp::wrap(panel_est(X, Y, MF));
    return rcpp_result_gen;
END_RCPP
}
// panel_factor
List panel_factor(arma::mat E, int r);
RcppExport SEXP _fect_panel_factor(SEXP ESEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(panel_factor(E, r));
    return rcpp_result_gen;
END_RCPP
}
// panel_FE
arma::mat panel_FE(arma::mat E, double lambda, int hard);
RcppExport SEXP _fect_panel_FE(SEXP ESEXP, SEXP lambdaSEXP, SEXP hardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type hard(hardSEXP);
    rcpp_result_gen = Rcpp::wrap(panel_FE(E, lambda, hard));
    return rcpp_result_gen;
END_RCPP
}
// ife
List ife(arma::mat E, int force, int mc, int r, int hard, double lambda);
RcppExport SEXP _fect_ife(SEXP ESEXP, SEXP forceSEXP, SEXP mcSEXP, SEXP rSEXP, SEXP hardSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type mc(mcSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type hard(hardSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(ife(E, force, mc, r, hard, lambda));
    return rcpp_result_gen;
END_RCPP
}
// fe_ad_iter
List fe_ad_iter(arma::mat Y, arma::mat Y0, arma::mat I, int force, double tolerate);
RcppExport SEXP _fect_fe_ad_iter(SEXP YSEXP, SEXP Y0SEXP, SEXP ISEXP, SEXP forceSEXP, SEXP tolerateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y0(Y0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    rcpp_result_gen = Rcpp::wrap(fe_ad_iter(Y, Y0, I, force, tolerate));
    return rcpp_result_gen;
END_RCPP
}
// fe_ad_covar_iter
List fe_ad_covar_iter(arma::cube XX, arma::mat xxinv, arma::mat Y, arma::mat Y0, arma::mat I, arma::mat beta0, int force, double tolerate);
RcppExport SEXP _fect_fe_ad_covar_iter(SEXP XXSEXP, SEXP xxinvSEXP, SEXP YSEXP, SEXP Y0SEXP, SEXP ISEXP, SEXP beta0SEXP, SEXP forceSEXP, SEXP tolerateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xxinv(xxinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y0(Y0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    rcpp_result_gen = Rcpp::wrap(fe_ad_covar_iter(XX, xxinv, Y, Y0, I, beta0, force, tolerate));
    return rcpp_result_gen;
END_RCPP
}
// fe_ad_inter_iter
List fe_ad_inter_iter(arma::mat Y, arma::mat Y0, arma::mat I, int force, int mc, int r, int hard, double lambda, double tolerate);
RcppExport SEXP _fect_fe_ad_inter_iter(SEXP YSEXP, SEXP Y0SEXP, SEXP ISEXP, SEXP forceSEXP, SEXP mcSEXP, SEXP rSEXP, SEXP hardSEXP, SEXP lambdaSEXP, SEXP tolerateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y0(Y0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type mc(mcSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type hard(hardSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    rcpp_result_gen = Rcpp::wrap(fe_ad_inter_iter(Y, Y0, I, force, mc, r, hard, lambda, tolerate));
    return rcpp_result_gen;
END_RCPP
}
// fe_ad_inter_covar_iter
List fe_ad_inter_covar_iter(arma::cube XX, arma::mat xxinv, arma::mat Y, arma::mat Y0, arma::mat I, arma::mat beta0, int force, int mc, int r, int hard, double lambda, double tolerate);
RcppExport SEXP _fect_fe_ad_inter_covar_iter(SEXP XXSEXP, SEXP xxinvSEXP, SEXP YSEXP, SEXP Y0SEXP, SEXP ISEXP, SEXP beta0SEXP, SEXP forceSEXP, SEXP mcSEXP, SEXP rSEXP, SEXP hardSEXP, SEXP lambdaSEXP, SEXP tolerateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xxinv(xxinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y0(Y0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type mc(mcSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type hard(hardSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    rcpp_result_gen = Rcpp::wrap(fe_ad_inter_covar_iter(XX, xxinv, Y, Y0, I, beta0, force, mc, r, hard, lambda, tolerate));
    return rcpp_result_gen;
END_RCPP
}
// beta_iter
List beta_iter(arma::cube X, arma::mat xxinv, arma::mat Y, int r, double tolerate, arma::mat beta0);
RcppExport SEXP _fect_beta_iter(SEXP XSEXP, SEXP xxinvSEXP, SEXP YSEXP, SEXP rSEXP, SEXP tolerateSEXP, SEXP beta0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xxinv(xxinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type tolerate(tolerateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta0(beta0SEXP);
    rcpp_result_gen = Rcpp::wrap(beta_iter(X, xxinv, Y, r, tolerate, beta0));
    return rcpp_result_gen;
END_RCPP
}
// qr_factor
List qr_factor(arma::mat F, arma::mat L);
RcppExport SEXP _fect_qr_factor(SEXP FSEXP, SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(qr_factor(F, L));
    return rcpp_result_gen;
END_RCPP
}
// IND
arma::mat IND(arma::mat I);
RcppExport SEXP _fect_IND(SEXP ISEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    rcpp_result_gen = Rcpp::wrap(IND(I));
    return rcpp_result_gen;
END_RCPP
}
// subfe
List subfe(arma::mat Y, arma::mat X, arma::mat I, int intercept);
RcppExport SEXP _fect_subfe(SEXP YSEXP, SEXP XSEXP, SEXP ISEXP, SEXP interceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type intercept(interceptSEXP);
    rcpp_result_gen = Rcpp::wrap(subfe(Y, X, I, intercept));
    return rcpp_result_gen;
END_RCPP
}
// l_ub
List l_ub(arma::mat Y, arma::mat F, arma::mat I, int r, int force);
RcppExport SEXP _fect_l_ub(SEXP YSEXP, SEXP FSEXP, SEXP ISEXP, SEXP rSEXP, SEXP forceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    rcpp_result_gen = Rcpp::wrap(l_ub(Y, F, I, r, force));
    return rcpp_result_gen;
END_RCPP
}
// f_ub
List f_ub(arma::mat Y, arma::mat L, arma::mat I, int r, int force);
RcppExport SEXP _fect_f_ub(SEXP YSEXP, SEXP LSEXP, SEXP ISEXP, SEXP rSEXP, SEXP forceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type L(LSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    rcpp_result_gen = Rcpp::wrap(f_ub(Y, L, I, r, force));
    return rcpp_result_gen;
END_RCPP
}
// fe
List fe(arma::mat E, arma::mat F_old, arma::mat xi_old, int force, int r);
RcppExport SEXP _fect_fe(SEXP ESEXP, SEXP F_oldSEXP, SEXP xi_oldSEXP, SEXP forceSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F_old(F_oldSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi_old(xi_oldSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(fe(E, F_old, xi_old, force, r));
    return rcpp_result_gen;
END_RCPP
}
// fe_ub
List fe_ub(arma::mat E, arma::mat I, arma::mat F_old, arma::mat xi_old, int force, int r);
RcppExport SEXP _fect_fe_ub(SEXP ESEXP, SEXP ISEXP, SEXP F_oldSEXP, SEXP xi_oldSEXP, SEXP forceSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F_old(F_oldSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi_old(xi_oldSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(fe_ub(E, I, F_old, xi_old, force, r));
    return rcpp_result_gen;
END_RCPP
}
// inter_fe
List inter_fe(arma::mat Y, arma::cube X, int r, int force, arma::mat beta0, double tol);
RcppExport SEXP _fect_inter_fe(SEXP YSEXP, SEXP XSEXP, SEXP rSEXP, SEXP forceSEXP, SEXP beta0SEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(inter_fe(Y, X, r, force, beta0, tol));
    return rcpp_result_gen;
END_RCPP
}
// inter_fe_ub
List inter_fe_ub(arma::mat Y, arma::mat Y0, arma::cube X, arma::mat I, arma::mat beta0, int r, int force, double tol);
RcppExport SEXP _fect_inter_fe_ub(SEXP YSEXP, SEXP Y0SEXP, SEXP XSEXP, SEXP ISEXP, SEXP beta0SEXP, SEXP rSEXP, SEXP forceSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y0(Y0SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(inter_fe_ub(Y, Y0, X, I, beta0, r, force, tol));
    return rcpp_result_gen;
END_RCPP
}
// inter_fe_mc
List inter_fe_mc(arma::mat Y, arma::mat Y0, arma::cube X, arma::mat I, arma::mat beta0, int r, double lambda, int force, double tol);
RcppExport SEXP _fect_inter_fe_mc(SEXP YSEXP, SEXP Y0SEXP, SEXP XSEXP, SEXP ISEXP, SEXP beta0SEXP, SEXP rSEXP, SEXP lambdaSEXP, SEXP forceSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y0(Y0SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(inter_fe_mc(Y, Y0, X, I, beta0, r, lambda, force, tol));
    return rcpp_result_gen;
END_RCPP
}
// inter_fe_d
List inter_fe_d(arma::mat Y, arma::mat Y_fit0, arma::mat FE0, arma::cube X, int r, int force, int mniter, double w, double tol);
RcppExport SEXP _fect_inter_fe_d(SEXP YSEXP, SEXP Y_fit0SEXP, SEXP FE0SEXP, SEXP XSEXP, SEXP rSEXP, SEXP forceSEXP, SEXP mniterSEXP, SEXP wSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y_fit0(Y_fit0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type FE0(FE0SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type mniter(mniterSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(inter_fe_d(Y, Y_fit0, FE0, X, r, force, mniter, w, tol));
    return rcpp_result_gen;
END_RCPP
}
// inter_fe_d_ub
List inter_fe_d_ub(arma::mat Y, arma::mat Y_fit0, arma::mat FE0, arma::cube X, arma::mat I, int r, int force, int mniter, double w, double tol);
RcppExport SEXP _fect_inter_fe_d_ub(SEXP YSEXP, SEXP Y_fit0SEXP, SEXP FE0SEXP, SEXP XSEXP, SEXP ISEXP, SEXP rSEXP, SEXP forceSEXP, SEXP mniterSEXP, SEXP wSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y_fit0(Y_fit0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type FE0(FE0SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type mniter(mniterSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(inter_fe_d_ub(Y, Y_fit0, FE0, X, I, r, force, mniter, w, tol));
    return rcpp_result_gen;
END_RCPP
}
// inter_fe_d_qr
List inter_fe_d_qr(arma::mat Y, arma::mat Y_fit0, arma::mat FE0, arma::mat factor0, arma::mat xi0, arma::cube X, int r, int force, int mniter, double w, double tol);
RcppExport SEXP _fect_inter_fe_d_qr(SEXP YSEXP, SEXP Y_fit0SEXP, SEXP FE0SEXP, SEXP factor0SEXP, SEXP xi0SEXP, SEXP XSEXP, SEXP rSEXP, SEXP forceSEXP, SEXP mniterSEXP, SEXP wSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y_fit0(Y_fit0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type FE0(FE0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type factor0(factor0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi0(xi0SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type mniter(mniterSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(inter_fe_d_qr(Y, Y_fit0, FE0, factor0, xi0, X, r, force, mniter, w, tol));
    return rcpp_result_gen;
END_RCPP
}
// inter_fe_d_qr_ub
List inter_fe_d_qr_ub(arma::mat Y, arma::mat Y_fit0, arma::mat FE0, arma::mat factor0, arma::mat xi0, arma::cube X, arma::mat I, int r, int force, int mniter, double w, double tol);
RcppExport SEXP _fect_inter_fe_d_qr_ub(SEXP YSEXP, SEXP Y_fit0SEXP, SEXP FE0SEXP, SEXP factor0SEXP, SEXP xi0SEXP, SEXP XSEXP, SEXP ISEXP, SEXP rSEXP, SEXP forceSEXP, SEXP mniterSEXP, SEXP wSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y_fit0(Y_fit0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type FE0(FE0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type factor0(factor0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xi0(xi0SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type mniter(mniterSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(inter_fe_d_qr_ub(Y, Y_fit0, FE0, factor0, xi0, X, I, r, force, mniter, w, tol));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fect_loglh", (DL_FUNC) &_fect_loglh, 2},
    {"_fect_loglh_ub", (DL_FUNC) &_fect_loglh_ub, 3},
    {"_fect_data_ub_adj", (DL_FUNC) &_fect_data_ub_adj, 2},
    {"_fect_XXinv", (DL_FUNC) &_fect_XXinv, 1},
    {"_fect_panel_beta", (DL_FUNC) &_fect_panel_beta, 4},
    {"_fect_Y_demean", (DL_FUNC) &_fect_Y_demean, 2},
    {"_fect_fe_add", (DL_FUNC) &_fect_fe_add, 6},
    {"_fect_panel_est", (DL_FUNC) &_fect_panel_est, 3},
    {"_fect_panel_factor", (DL_FUNC) &_fect_panel_factor, 2},
    {"_fect_panel_FE", (DL_FUNC) &_fect_panel_FE, 3},
    {"_fect_ife", (DL_FUNC) &_fect_ife, 6},
    {"_fect_fe_ad_iter", (DL_FUNC) &_fect_fe_ad_iter, 5},
    {"_fect_fe_ad_covar_iter", (DL_FUNC) &_fect_fe_ad_covar_iter, 8},
    {"_fect_fe_ad_inter_iter", (DL_FUNC) &_fect_fe_ad_inter_iter, 9},
    {"_fect_fe_ad_inter_covar_iter", (DL_FUNC) &_fect_fe_ad_inter_covar_iter, 12},
    {"_fect_beta_iter", (DL_FUNC) &_fect_beta_iter, 6},
    {"_fect_qr_factor", (DL_FUNC) &_fect_qr_factor, 2},
    {"_fect_IND", (DL_FUNC) &_fect_IND, 1},
    {"_fect_subfe", (DL_FUNC) &_fect_subfe, 4},
    {"_fect_l_ub", (DL_FUNC) &_fect_l_ub, 5},
    {"_fect_f_ub", (DL_FUNC) &_fect_f_ub, 5},
    {"_fect_fe", (DL_FUNC) &_fect_fe, 5},
    {"_fect_fe_ub", (DL_FUNC) &_fect_fe_ub, 6},
    {"_fect_inter_fe", (DL_FUNC) &_fect_inter_fe, 6},
    {"_fect_inter_fe_ub", (DL_FUNC) &_fect_inter_fe_ub, 8},
    {"_fect_inter_fe_mc", (DL_FUNC) &_fect_inter_fe_mc, 9},
    {"_fect_inter_fe_d", (DL_FUNC) &_fect_inter_fe_d, 9},
    {"_fect_inter_fe_d_ub", (DL_FUNC) &_fect_inter_fe_d_ub, 10},
    {"_fect_inter_fe_d_qr", (DL_FUNC) &_fect_inter_fe_d_qr, 11},
    {"_fect_inter_fe_d_qr_ub", (DL_FUNC) &_fect_inter_fe_d_qr_ub, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_fect(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
