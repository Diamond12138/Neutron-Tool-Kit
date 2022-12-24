set filename=log
g++ "test/src/%filename%.cpp" "src/Neutron.cpp" -o "test/bin/%filename%.exe" ^
    -lgdi32 -lopengl32 -lglew32 -lsfml-system -lsfml-window -lsfml-graphics
"test/bin/%filename%.exe"