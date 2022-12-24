set filename=string_utils
g++ "test/%filename%.cpp" -o "bin/%filename%.exe" ^
    -lgdi32 -lopengl32 -lglew32 -lsfml-system -lsfml-window -lsfml-graphics
"bin/%filename%.exe"