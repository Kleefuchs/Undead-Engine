bash reset_objects.sh
bash reset_target.sh
cd objects #Enters the objects folder
g++ $(find "../src" -type f -iregex ".*\.cpp") -c -lraylib -Og -Werror -Wpedantic -std=c++2b #Compiles the engine to a bunch of .o files
cd .. #returns back to project root folder
bash create-static-library.sh