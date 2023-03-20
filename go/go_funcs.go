package main

import (
	"C"
	"fmt"
)

//export go_echo
func go_echo(input string) (*C.char, *C.char) {

	output := input

	return C.CString(output), C.CString("")

}

func main() {
	fmt.Printf("Test done......................\n")
}
