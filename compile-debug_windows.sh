#cd .. #Returns to project root folder
bash reset_target.sh
cd objects #Enters the objects folder
g++ $(find "../src" -type f -iregex ".*\.cpp") -I ../src/ -c -lraylib -Og -Werror -Wpedantic -lopengl32 -lgdi32 -lwinmm -std=c++2b #Compiles the engine to a bunch of .o files
cd .. #returns back to project root folder
bash create-static-libary.sh