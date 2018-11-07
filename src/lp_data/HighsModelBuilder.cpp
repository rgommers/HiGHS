#include "HighsModelBuilder.h"

void HighsModelBuilder::HighsAddVar(HighsVar& var) {
  this->variables.push_back(var);
}

void HighsModelBuilder::HighsAddCons(HighsCons& cons) {
  this->constraints.push_back(cons);
}

void HighsModelBuilder::HighsCreateLp(HighsLp& lp) {}