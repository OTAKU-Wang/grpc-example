# linux 下安装 gprc
```shell
sudo apt-get install cmake
sudo apt install -y build-essential autoconf libtool pkg-config
git clone --recurse-submodules -b v1.50.0 --depth 1 --shallow-submodules https://github.com/grpc/grpc
# 如果出现网络问题 git submodule update 继续下载
cd grpc
mkdir -p cmake/build
pushd cmake/build
cmake -DgRPC_INSTALL=ON \
      -DgRPC_BUILD_TESTS=OFF \
      -DCMAKE_INSTALL_PREFIX=/usr/local \
      ../..
make -j 4
make install
popd
```

