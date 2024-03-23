package main

import (
	"fmt"
)

func main() {

	var n int64
	var m int64
	var result int64

	fmt.Scan(&n, &m)

	result = n - m

	if result < 0 {
		fmt.Println(-result)
	} else {
		fmt.Println(result)
	}
}
