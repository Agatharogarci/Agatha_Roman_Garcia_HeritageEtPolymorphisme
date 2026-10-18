//
// Created by Agatha on 15.10.2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMI_AUTOMATIC_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMI_AUTOMATIC_H


#include "firearm.h"

class SemiAutomatic : public Firearm {
public:
  SemiAutomatic(std::string name, int damage, float weight, int magazine_capacity, std::string caliber);

void Fire() override;

  void SingleShotMode();
};

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_SEMI_AUTOMATIC_H