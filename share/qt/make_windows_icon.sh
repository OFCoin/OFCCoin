#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/OFCCoin.png
ICON_DST=../../src/qt/res/icons/OFCCoin.ico
convert ${ICON_SRC} -resize 16x16 OFCCoin-16.png
convert ${ICON_SRC} -resize 32x32 OFCCoin-32.png
convert ${ICON_SRC} -resize 48x48 OFCCoin-48.png
convert OFCCoin-16.png OFCCoin-32.png OFCCoin-48.png ${ICON_DST}

