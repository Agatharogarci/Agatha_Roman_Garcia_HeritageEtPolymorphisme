//
// Created by Agatha on 18.10.2026.
//
#include <print>
#include "FullAuto.h"
FullAuto::FullAuto(std::string name, int damage, float weight,
                   int magazine_capacity, std::string caliber, int burst_length)
  : Firearm(name, damage, weight, magazine_capacity, caliber), burstLength_(burst_length){}

void FullAuto::Fire_FullAuto() {
    if (!CanFire()) {
      std::println("{} : chargeur vide.", name_);
      return;
    }
    ammo_ -= burstLength_;
    std::println("{} : {} tirs , {} degats. ({}/{})", name_, burstLength_, damage_, ammo_, magazine_capacity_);
}
void FullAuto::Fire() {
  Fire_FullAuto();
}
