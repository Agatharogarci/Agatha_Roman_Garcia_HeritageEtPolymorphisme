//
// Created by Agatha on 15.10.2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H


#include "weapon.h"

class Firearm : public Weapon  {
public:
  Firearm(std::string name, int damage, float weight, int magazine_capacity, std::string caliber);

  bool CanFire() const;
  void Reload();
  void Fire() override;


  const std::string name() const {return name_;}
  int ammo() const {return ammo_;}
  int magazine_capacity() const {return magazine_capacity_;}

protected:
  int magazine_capacity_ = 0;
  int ammo_ = 0;
  std::string caliber_;};

#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FIREARM_H