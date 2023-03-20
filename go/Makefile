go: go_funcs.go
	go build -buildmode=c-shared -o libgofuncs.so go_funcs.go


install:
	sed  -i '1i #pragma once' libgofuncs.h
	mv lib*.* ../build/.