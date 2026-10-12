#include "weapon.h"

#include <print>
#include <utility>

Weapon::Weapon(std::string name, int damage, float weight, int magazine_capacity)
    : name_(std::move(name)),
      damage_(damage),
      weight_(weight),
      magazine_capacity_(magazine_capacity),
      ammo_(magazine_capacity) {}

bool Weapon::CanFire() const { return ammo_ > 0; }

void Weapon::Fire() {
  if (!CanFire()) {
    std::println("{} : chargeur vide.", name_);
    return;
  }
  --ammo_;
  std::println("{} : un projectile, {} degats. ({}/{})", name_, damage_, ammo_,
               magazine_capacity_);
}

void Weapon::Reload() {
  ammo_ = magazine_capacity_;
  std::println("{} : recharge. ({}/{})", name_, ammo_, magazine_capacity_);
}
