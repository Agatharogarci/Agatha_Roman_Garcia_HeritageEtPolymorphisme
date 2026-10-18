//
// Created by Agatha on 18.10.2026.
//
#include <print>
#include "Melee.h"

Melee::Melee(std::string name, int damage, float weight, float bladeLength):
Weapon(name, damage, weight), bladeLength_(bladeLength) {}

void Melee::Swing() {
  std::println("Joli coup! {} : degats",damage_);
}

void Melee::Fire() {
  Swing();
}