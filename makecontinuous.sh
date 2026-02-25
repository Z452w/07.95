#!/bin/bash

# Standard Build
make clean
make -j
tools/sm64tools/n64cksum build/jp/sm64.jp.z64
make patch -j
cp build/jp/sm64.jp.bps "$1-$2.bps"

# HLE Build
make clean
make -j GRUCODE=f3d_20E
tools/sm64tools/n64cksum build/jp/sm64.jp.z64
make patch -j GRUCODE=f3d_20E
cp build/jp/sm64.jp.bps "$1-$2-hle.bps"
