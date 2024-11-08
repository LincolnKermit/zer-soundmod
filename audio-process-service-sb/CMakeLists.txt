cmake_minimum_required(VERSION 3.10)
project(audio_process_service_sb)

# Spécifie la norme C++ utilisée
set(CMAKE_CXX_STANDARD 20)

# Ajouter les chemins d'inclusion pour PortAudio
include_directories(/opt/homebrew/include)

# Ajouter les chemins de bibliothèque pour PortAudio
link_directories(/opt/homebrew/lib)

# Créer l'exécutable
add_executable(audio_process_service_sb main.cpp)

# Lier l'exécutable avec PortAudio
target_link_libraries(audio_process_service_sb portaudio)
