cmake_minimum_required(VERSION 3.6)
project(DandD_170405_2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Weapon.h Weapon.cpp GameCharacter.cpp GameCharacter.h Die.cpp Die.h Bow.cpp Bow.h Sword.cpp Sword.h Knight.cpp Knight.h Orc.cpp Orc.h Wizard.cpp Wizard.h Inventory.h Potion.cpp Potion.h Utility.h)
add_executable(DandD ${SOURCE_FILES})