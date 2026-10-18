//
// Created by Agatha on 18.10.2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_MELEE_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_MELEE_H
#include <string>
#include "weapon.h"

class Melee: public Weapon {
private:
  float bladeLength_;
public:
  Melee(std::string name, int damage, float weight, float bladeLength);
  void Fire() override;

  void Swing();

};
#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_MELEE_H
