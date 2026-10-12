# Héritage et polymorphisme — companion GPR-CF-POO-06

Le point de départ de la formative *L'armurerie*. Un stand de tir, une seule arme,
une classe sans parent.

| Étape | Ce qu'elle contient |
|---|---|
| `01_une_seule_arme` | `Weapon` : nom, dégâts, poids, chargeur. `Fire()`, `Reload()`. Le menu l'appelle directement. |

## Compiler et lancer

```powershell
cmake -S . -B build
cmake --build build
build/01_une_seule_arme/01_une_seule_arme.exe
```

Touches : `1` pour tirer, `r` pour recharger, `q` pour quitter.

## Ce qu'on en fait

Ajoutez une deuxième arme. Puis une troisième. Au bout de deux copier-coller, la
hiérarchie s'impose — c'est le sujet de la séance.

L'énoncé complet est dans le vault :
`01 courses/projects/C++/Formative - OOP - L'armurerie.md`.

## Conventions

En-têtes `.h` dans `include/`, implémentations `.cc` dans `src/` : voir
`01 courses/companion projects/CLAUDE.md` et la skill `programmation-cpp`.
