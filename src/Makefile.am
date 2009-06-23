bin_PROGRAMS = hello
hello_SOURCES = main.c
hello_LDADD = libhello.la

lib_LTLIBRARIES = libhello.la
libhello_la_SOURCES = hello.c
libhello_la_LDFLAGS = -release $(PACKAGE_VERSION)

include_HEADERS = hello.h
