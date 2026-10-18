//
// Created by Agatha on 18.10.2026.
//

#ifndef GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FULLAUTO_H
#define GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FULLAUTO_H
#include <string>
#include "firearm.h"

class FullAuto : public Firearm {
private:
  int burstLength_;
  public:
  FullAuto(std::string name, int damage, float weight, int magazine_capacity, std::string caliber, int burst_length);
  void Fire() override;

  void Fire_FullAuto();
};



#endif  // GPR_CF_POO_06_HERITAGEETPOLYMORPHISME_FULLAUTO_H
