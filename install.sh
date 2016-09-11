#!/bin/sh
#
# Install the library
#


# help
if [ "$1" != "help" ] && [ "$1" != "--help" ] && [ "$1" != "-h" ]; then
  true
else
  echo "Usage: [PREFIX=/usr] ./install.sh [--help]"
  exit 0
fi

[ -z $PREFIX ] && export PREFIX="/usr/local"

if [ ! -w $PREFIX ]; then
  if [ `whoami` != "root" ]; then
    echo "You must become more powerful to install the arcane library to '$PREFIX'."
    su -c './install.sh'
  else
    echo "There appears to be a problem with the PREFIX: '$PREFIX'"
    echo "Please fix it..."
  fi
else
  # install
  include=$PREFIX/include/arc/enchant
  lib=$PREFIX/lib
  mkdir -v -p $include
  cp -v include/*.h $include
  cp -v lib/* $lib
fi
