ar rcs target/lib/libundeadengine.a objects/*.o #compiles the .o files to a static library

prefix="src/include"

#recreate all include files

for I in $(find "src/include" -type f -iregex ".*\.h")
do
    cp $I "target/include/${I#$prefix}"
done
read -p "Press Enter to exit"