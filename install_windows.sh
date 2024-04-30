mingw_w64_location="C:\w64devkit"
cd target
echo ${mingw_w64_location}/x86_64-w64-mingw32/include/UndeadEngine
cp -r include ${mingw_w64_location}/x86_64-w64-mingw32/include/UndeadEngine
cp lib/libundeadengine.a ${mingw_w64_location}/x86_64-w64-mingw32/lib/libundeadengine.a
read -p "Press Enter to continue"