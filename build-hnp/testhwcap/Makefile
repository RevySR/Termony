all:
	rm -rf temp build
	mkdir -p temp build/usr/local/bin
	cd temp/ && /Applications/DevEco-Studio.app/Contents/sdk/default/openharmony/native/llvm/bin/aarch64-unknown-linux-ohos-clang -Wall -Werror -O2 ../testhwcap.c -o testhwcap
	cd temp/ && cp -rfv testhwcap ../build/usr/local/bin/testhwcap
	mkdir -p ../sysroot
	cp -rfv build/usr/local/. ../sysroot