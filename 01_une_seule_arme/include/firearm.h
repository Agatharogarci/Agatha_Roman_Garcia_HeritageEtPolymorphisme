//
// Created by Agatha on 15.10.2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_MELEE_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_MELEE_H

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_MELEE_H
#include "weapon.h"

class Firearm : public Weapon  {
public:
  void Fire() override;
  void Reload();
  bool CanFire();
  const std::string name() const {return name_;}
  int ammo() const {return ammo_;}
  int magazine_capacity() const {return magazine_capacity_;}

protected:
int ammo_ = 0;
int magazine_capacity_ = 0;};