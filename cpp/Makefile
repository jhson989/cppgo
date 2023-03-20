
MAIN = main.cpp

GO_HEADER = ../build/libgofuncs.h
GO_LIB = ../build/libgofuncs.so

CPP_HEADERS = gostring_helper.hpp
CPP_FILES = gostring_helper.cpp


cpp: ${MAIN} ${GO_HEADER} ${GO_LIB} ${CPP_HEADERS} ${CPP_FILES}
	g++ -o app.out ${MAIN} ${GO_LIB} ${CPP_FILES}