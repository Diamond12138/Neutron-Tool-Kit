set filename=window
g++ "test/%filename%.cpp" "src/Neutron.cpp" -o "test/%filename%.exe" ^
    -lgdi32 -lopengl32 -lglew32 -lsfml-system -lsfml-window -lsfml-graphics
"test/%filename%.exe"