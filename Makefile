
SCHEME = csc
SCHEMEFLAGS =
SRC = src/main.scm

main: src/main.scm
	$(SCHEME) src/main.scm
