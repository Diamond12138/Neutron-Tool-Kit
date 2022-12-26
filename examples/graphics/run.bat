set filename=triangle
g++ "%filename%.cpp" -o "%filename%.exe" ^
    -lgdi32 -lopengl32 -lglew32 -lsfml-system -lsfml-window -lsfml-graphics
"%filename%.exe"