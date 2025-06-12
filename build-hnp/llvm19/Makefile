

all: download/llvm-project-19.1.7.src.tar.xz
	# rm -rf temp build
	# mkdir -p temp build #bolt;clang;clang-tools-extra;compiler-rt;cross-project-tests;libc;libclc;lld;lldb;mlir;openmp;polly;pstl;flang
	# # -Dzstd_FOUND=ON -Dzstd_INCLUDE_DIR="$(shell pwd)/../sysroot/include" -Dzstd_LIBRARY=zstd -Dzstd_STATIC_LIBRARY=zstd  
	# cd temp && tar xvf ../download/llvm-project-19.1.7.src.tar.xz
	# cd temp/llvm-project-19.1.7.src && mkdir -p build

	# find temp/llvm-project-19.1.7.src/compiler-rt -type f | grep cmake$ | xargs sed -i.bak 's/NOT APPLE/1/' || true
	# find temp/llvm-project-19.1.7.src/compiler-rt -type f | grep cmake$ | xargs sed -i.bak 's/APPLE/0/' || true
	# find temp/llvm-project-19.1.7.src/compiler-rt -type f | grep CMakeLists.txt | xargs sed -i.bak 's/NOT APPLE/1/' || true
	# find temp/llvm-project-19.1.7.src/compiler-rt -type f | grep CMakeLists.txt | xargs sed -i.bak 's/APPLE/0/' || true
	# find temp/llvm-project-19.1.7.src/libunwind -type f | grep CMakeLists.txt | xargs sed -i.bak 's/NOT APPLE/1/' || true
	# find temp/llvm-project-19.1.7.src/libunwind -type f | grep CMakeLists.txt | xargs sed -i.bak 's/APPLE/0/' || true

	# find temp/llvm-project-19.1.7.src/runtimes -type f | grep cmake$ | xargs sed -i.bak 's/NOT APPLE/1/' || true
	# find temp/llvm-project-19.1.7.src/runtimes -type f | grep cmake$ | xargs sed -i.bak 's/APPLE/0/' || true

	# find temp/llvm-project-19.1.7.src/runtimes -type f | grep CMakeLists.txt | xargs sed -i.bak 's/NOT APPLE/1/' || true
	# find temp/llvm-project-19.1.7.src/runtimes -type f | grep CMakeLists.txt | xargs sed -i.bak 's/APPLE/0/' || true

	# sed -i.bak 's&#include <sys/sysinfo.h>&&' temp/llvm-project-19.1.7.src/compiler-rt/lib/sanitizer_common/sanitizer_platform_limits_posix.cpp

	# cd temp/llvm-project-19.1.7.src/build && PKG_CONFIG=/usr/bin/false cmake ../ -DCOMPILER_RT_DEFAULT_TARGET_ONLY=ON -DCOMPILER_RT_DEFAULT_TARGET_ARCH=aarch64 -DCMAKE_BUILD_TYPE=RelWithDebInfo -DLLVM_ENABLE_PROJECTS="clang;clang-tools-extra;lld" -DLLVM_ENABLE_RUNTIMES="libunwind;compiler-rt" -DCMAKE_C_COMPILER_TARGET=aarch64-linux-ohos -DCMAKE_CXX_COMPILER_TARGET=aarch64-linux-ohos -DLIBCXXABI_USE_LLVM_UNWINDER=OFF -S ../llvm -DLLVM_HOST_TRIPLE=aarch64-linux-ohos -DLLVM_ENABLE_RTTI=ON -DLLVM_ENABLE_EH=ON -DLLVM_ENABLE_LIBXML2=OFF -DLLVM_ENABLE_Z3_SOLVER=OFF -DLLVM_ENABLE_LIBEDIT=OFF -DLLVM_ENABLE_LIBPFM=OFF -DLLVM_ENABLE_LIBCXX=OFF -DLLVM_ENABLE_LIBCXXABI=OFF -DLLVM_ENABLE_ZLIB=OFF -DLLVM_ENABLE_TERMINFO=OFF -DLLVM_ENABLE_LZMA=OFF -DLLVM_ENABLE_ZSTD=OFF -DLLVM_ENABLE_PER_TARGET_RUNTIME_DIR=ON -DCMAKE_SYSTEM_NAME=OHOS -DCMAKE_SYSTEM_PROCESSOR=aarch64 -DCMAKE_C_COMPILER=$(TOOL_HOME)/sdk/default/openharmony/native/llvm/bin/aarch64-unknown-linux-ohos-clang -DCMAKE_CXX_COMPILER=$(TOOL_HOME)/sdk/default/openharmony/native/llvm/bin/aarch64-unknown-linux-ohos-clang++ -DCMAKE_AR=$(TOOL_HOME)/sdk/default/openharmony/native/llvm/bin/llvm-ar -DCMAKE_RANLIB=$(TOOL_HOME)/sdk/default/openharmony/native/llvm/bin/llvm-ranlib -DCMAKE_NM=$(TOOL_HOME)/sdk/default/openharmony/native/llvm/bin/llvm-nm -DCMAKE_SYSROOT=$(TOOL_HOME)/sdk/default/openharmony/native/sysroot/ -DCMAKE_EXE_LINKER_FLAGS="-L $(shell pwd)/../sysroot/lib" -DCMAKE_BUILD_WITH_INSTALL_RPATH=ON  -DCMAKE_INSTALL_PREFIX=/data/app/base.org/base_1.0 -DLLDB_ENABLE_LZMA=OFF -DLIBUNWIND_ENABLE_SHARED=OFF -DCOMPILER_RT_USE_LLVM_UNWINDER=ON -DCOMPILER_RT_BUILD_BUILTINS=ON -DCOMPILER_RT_BUILD_ASAN=OFF -DCOMPILER_RT_BUILD_TSAN=OFF -DCOMPILER_RT_BUILD_MSAN=OFF -DCOMPILER_RT_BUILD_UBSAN=OFF -DCOMPILER_RT_BUILD_LSAN=OFF -DCOMPILER_RT_BUILD_SANCER=OFF  -DCOMPILER_RT_BUILD_LIBFUZZER=OFF -DCOMPILER_RT_BUILD_MEMPROF=OFF -DCOMPILER_RT_BUILD_PROFILE=OFF -DCOMPILER_RT_BUILD_SANITIZERS=OFF -DCOMPILER_RT_BUILD_XRAY=OFF 
	# cd temp/llvm-project-19.1.7.src/build && make -j $(shell nproc) && make install DESTDIR=$(shell pwd)/build

	# find build/data/app/base.org/base_1.0/bin/ -type f -exec $(TOOL_HOME)/sdk/default/openharmony/native/llvm/bin/llvm-strip {} \; || true
	# find build/data/app/base.org/base_1.0/lib/ -type f -exec $(TOOL_HOME)/sdk/default/openharmony/native/llvm/bin/llvm-strip {} \; || true
	# mkdir -p ../sysroot
	# cp -rfv build/data/app/base.org/base_1.0/. ../sysroot

download/llvm-project-19.1.7.src.tar.xz:
	mkdir -p download
	cd download && wget https://github.com/llvm/llvm-project/releases/download/llvmorg-19.1.7/llvm-project-19.1.7.src.tar.xz
