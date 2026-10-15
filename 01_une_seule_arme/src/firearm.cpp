//
// Created by Agatha on 15.10.2026.
//
#include <print>
#include "firearm.h"

#include <print>

Firearm::Firearm(std::string name, int damage, float weight, int magazine_capacity, std::string caliber)
  : Weapon((name), damage, weight),

    magazine_capacity_(magazine_capacity),
    ammo_(magazine_capacity),
    caliber_((caliber)){}

    bool Firearm::CanFire() const {return ammo_ > 0;}

    void Firearm::Reload() {
    ammo_ = magazine_capacity_;
    std::println("{} Recharge ({};{})", name_, ammo_, magazine_capacity_);
}
    void Firearm::Fire() {
    if (!CanFire()) {
      std::println("{} : Chargeur vide", name_);
      return;
    }
    --ammo_;
  std::println("{} : un projectile, {} degats. ({}/{})", name_, damage_, ammo_,
               magazine_capacity_);
}