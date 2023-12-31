#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.63])
AC_INIT(
  [GMchess],
  [0.29.6.3],
  [lerosua@gmail.com],
  [gmchess],
  [https://salsa.debian.org/chinese-team/gmchess])
AC_CONFIG_SRCDIR([src/Pgnfile.cc])
AM_CONFIG_HEADER([config.h])
AC_CONFIG_MACRO_DIRS([m4])
AM_INIT_AUTOMAKE

IT_PROG_INTLTOOL([0.35.0])
AC_PROG_LIBTOOL

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_CPP


# Checks for libraries.
pkg_modules="gtkmm-2.4 >= 2.6.0"
PKG_CHECK_MODULES(PACKAGE, $pkg_modules)
AC_SUBST(PACKAGE_CFLAGS)
AC_SUBST(PACKAGE_LIBS)

CXXFLAGS="-fpermissive -g"

# Checks for header files.
AC_CHECK_HEADERS([arpa/inet.h libintl.h locale.h netdb.h netinet/in.h stdint.h stdlib.h string.h sys/ioctl.h sys/socket.h sys/timeb.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT64_T
AC_TYPE_INT8_T
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T

# Checks for library functions.
AC_FUNC_FORK
AC_CHECK_FUNCS([dup2 ftime gethostbyname memchr memset select setlocale socket strchr strncasecmp strrchr])


GETTEXT_PACKAGE=gmchess
AC_SUBST(GETTEXT_PACKAGE)
AC_DEFINE_UNQUOTED(GETTEXT_PACKAGE,"$GETTEXT_PACKAGE", [Gettext package])

AM_GLIB_GNU_GETTEXT


AC_CONFIG_FILES([Makefile
	src/Makefile
	src/engine/Makefile
	data/Makefile
	data/themes/Makefile
	data/themes/wood/Makefile
	data/themes/wood-small/Makefile
	data/themes/west/Makefile
	data/themes/west-small/Makefile
	data/sound/Makefile
	po/Makefile.in
	doc/Makefile
	doc/gmchess.6
	doc/convert_pgn.6
	doc/eleeye_engine.6
	])

AC_OUTPUT
