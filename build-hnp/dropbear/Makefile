all: download/DROPBEAR_2025.88.tar.gz
	rm -rf temp build
	mkdir -p temp build
	cd temp && tar xvf ../download/DROPBEAR_2025.88.tar.gz
	cd temp/dropbear-DROPBEAR_2025.88 && PKG_CONFIG=/usr/bin/false ./configure --prefix=/data/app/base.org/base_1.0  --disable-syslog --disable-utmp --disable-utmpx --disable-wtmp --disable-shadow ac_cv_lib_crypt_crypt=no ac_cv_func_getpass=no --host aarch64-unknown-linux-musl CC=/Applications/DevEco-Studio.app/Contents/sdk/default/openharmony/native/llvm/bin/aarch64-unknown-linux-ohos-clang AR=/Applications/DevEco-Studio.app/Contents/sdk/default/openharmony/native/llvm/bin/llvm-ar RANLIB=/Applications/DevEco-Studio.app/Contents/sdk/default/openharmony/native/llvm/bin/llvm-ranlib STRIP=/Applications/DevEco-Studio.app/Contents/sdk/default/openharmony/native/llvm/bin/llvm-strip LDFLAGS="-L $(shell pwd)/../sysroot/lib"
	cd temp/dropbear-DROPBEAR_2025.88 && make -j $(shell nproc) && make install DESTDIR=$(shell pwd)/build
	mkdir -p ../sysroot
	cp -rfv build/data/app/base.org/base_1.0/. ../sysroot

download/DROPBEAR_2025.88.tar.gz:
	mkdir -p download
	cd download && wget https://github.com/mkj/dropbear/archive/refs/tags/DROPBEAR_2025.88.tar.gz