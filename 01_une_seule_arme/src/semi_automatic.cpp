//
// Created by Agatha on 15.10.2026.
//
#include <print>
#include "semi_automatic.h"

SemiAutomatic::SemiAutomatic(std::string name, int damage, float weight, int magazine_capacity, std::string caliber)
: Firearm(name, damage, weight, magazine_capacity, caliber){}

void SemiAutomatic::SingleShotMode() {
  if (!CanFire()) {
    std::println("{} : chargeur vide.", name_);
    return;
  }
  --ammo_;
  std::println("{} : un tir unique, {} degats. ({}/{})", name_, damage_, ammo_, magazine_capacity_);
}

void SemiAutomatic::Fire() {
  SingleShotMode();
}