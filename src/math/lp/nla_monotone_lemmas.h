/*++
  Copyright (c) 2017 Microsoft Corporation

  Module Name:

  <name>

  Abstract:

  <abstract>

  Author:
  Nikolaj Bjorner (nbjorner)
  Lev Nachmanson (levnach)

  Revision History:


  --*/
#pragma once
namespace nla {
class core;
class monotone : common {    
public:
    monotone(core *core);
    void monotonicity_lemma();
private:
    void monotonicity_lemma(monic const& m);
    void monotonicity_lemma_gt(const monic& m, const rational& prod_val);    
    void monotonicity_lemma_lt(const monic& m, const rational& prod_val);    
    std::vector<rational> get_sorted_key(const monic& rm) const;
    vector<std::pair<rational, lpvar>> get_sorted_key_with_rvars(const monic& a) const;
};
}
