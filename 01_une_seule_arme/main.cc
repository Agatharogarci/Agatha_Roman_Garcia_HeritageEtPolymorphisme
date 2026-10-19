

#include <chrono>
#include <iostream>
#include <print>
#include <vector>

#include "FullAuto.h"
#include "Melee.h"
#include "firearm.h"
#include "semi_automatic.h"
#include "weapon.h"

    // Le stand de tir. Il ne connait qu'une arme, et il l'appelle directement.
    // A vous de lui en donner cinq, de cinq types differents, sans qu'il ait a
    // savoir laquelle il tient.
    int main(){

      std::vector<std::unique_ptr<Weapon>> weapons;
      weapons.push_back(std::make_unique<Melee>("Excalibur", 20, 3.0f, 0.50f));
      weapons.push_back(std::make_unique<Firearm>("Glock 17", 5, 0.97f, 17, "9mm"));
      weapons.push_back(std::make_unique<SemiAutomatic>("AR-15", 8, 2.9f, 30,"5.56x45mm" ));
      weapons.push_back(std::make_unique<FullAuto>("Ak-47", 14, 4.8f, 45, "7.62x39mm", 3));
      weapons.push_back(std::make_unique<Melee>("couteau",6,0.2f, 0.15f));


      std::println("--- STAND DE TIR ---");
      while (true) {
        std::println("");
        for (int i = 0; i < weapons.size(); i++) {
          std::print("{}.{} | ",i + 1, weapons[i]->name());
        }
        std::println("q  quitter");
        std::print("> ");

        char choix = 0;
        if (!(std::cin >> choix)) break;

        if (choix == 'q') break;

        int index = choix - '1';
        if (index >= 0 && index < static_cast<int>(weapons.size())) {
          weapons[index]->Fire();
        } else {
          std::println("Touche inconnue.");
        }
      }

    return 0;}



