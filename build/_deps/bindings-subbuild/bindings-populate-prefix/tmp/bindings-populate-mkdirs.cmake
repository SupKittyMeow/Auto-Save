# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/maxpersonal/Downloads/Auto Save/build/_deps/bindings-src"
  "/Users/maxpersonal/Downloads/Auto Save/build/_deps/bindings-build"
  "/Users/maxpersonal/Downloads/Auto Save/build/_deps/bindings-subbuild/bindings-populate-prefix"
  "/Users/maxpersonal/Downloads/Auto Save/build/_deps/bindings-subbuild/bindings-populate-prefix/tmp"
  "/Users/maxpersonal/Downloads/Auto Save/build/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp"
  "/Users/maxpersonal/Downloads/Auto Save/build/_deps/bindings-subbuild/bindings-populate-prefix/src"
  "/Users/maxpersonal/Downloads/Auto Save/build/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/maxpersonal/Downloads/Auto Save/build/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/maxpersonal/Downloads/Auto Save/build/_deps/bindings-subbuild/bindings-populate-prefix/src/bindings-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
