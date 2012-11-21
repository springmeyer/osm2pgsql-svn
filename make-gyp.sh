# install gyp from http://gyp.googlecode.com/svn/trunk
rm -rf ./build/
gyp build.gyp --depth=. -f make --generator-output=./build
V=1 make -C ./build/
