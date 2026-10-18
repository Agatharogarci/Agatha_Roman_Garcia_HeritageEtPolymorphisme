add_executable(01_une_seule_arme
        main.cc
        src/weapon.cc
        src/firearm.cpp
        include/firearm.h
        src/semi_automatic.cpp
        include/semi_automatic.h)
target_include_directories(01_une_seule_arme PRIVATE include)
