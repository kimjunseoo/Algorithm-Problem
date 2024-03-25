package main

import "fmt"

func main() {

	for true {

		var a int32
		var b int32

		fmt.Scan(&a, &b)

		if a > b {
			fmt.Println("Yes")
		} else if a == 0 && b == 0 {
			break
		} else {
			fmt.Println("No")
		}
	}
}
