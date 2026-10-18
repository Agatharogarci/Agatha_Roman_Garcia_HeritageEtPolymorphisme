#include <iostream>
#include <print>

#include "FullAuto.h"
#include "firearm.h"
#include "semi_automatic.h"
#include "weapon.h"
#include "Melee.h"

// Le stand de tir. Il ne connait qu'une arme, et il l'appelle directement.
// A vous de lui en donner cinq, de cinq types differents, sans qu'il ait a
// savoir laquelle il tient.
int main() {
  Firearm pistolet("Pistolet Glock 17", 5, 0.97f, 17, "9mm" );
  SemiAutomatic Carabine("AR-15", 8, 2.9f, 30,"5.56x45mm");
  FullAuto Fusil("AK-47", 14, 4.8f, 45, "7.62x39mm", 3 );


  std::println("--- STAND DE TIR ---");
  while (true) {
    std::println("");
    std::println("  1  {}  {}/{}", pistolet.name(), pistolet.ammo(),
                 pistolet.magazine_capacity());
    std::println("  r  recharger    q  quitter");
    std::print("> ");

    char choix = 0;
    if (!(std::cin >> choix)) break;

    if (choix == 'q') break;
    if (choix == 'r') {
      pistolet.Reload();
    } else if (choix == '1') {
      pistolet.Fire();
    }
    else {
      std::println("Touche inconnue.");
    }
  }
  return 0;
}
