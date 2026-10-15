#ifndef GPR_CF_POO_06_HERITAGE_WEAPON_H
#define GPR_CF_POO_06_HERITAGE_WEAPON_H

#include <string>

// Une arme, une classe, aucun heritage. C'est le point de depart : le stand de
// tir n'en connait qu'une, et Fire() sait faire une seule chose.
class Weapon {
 public:
  Weapon(std::string name, int damage, float weight);

  virtual void Fire() = 0;
  //void Reload();
  //bool CanFire() const;

  const std::string& name() const { return name_; }
 // int ammo() const { return ammo_; }
 // int magazine_capacity() const { return magazine_capacity_; }

 protected:
  std::string name_;
  int damage_ = 0;
  float weight_ = 0.0f;
  //int magazine_capacity_ = 0;
  //int ammo_ = 0;
};

#endif  // GPR_CF_POO_06_HERITAGE_WEAPON_H
