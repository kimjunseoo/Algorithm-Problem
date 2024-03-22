package main

import (
	"fmt"
	"math/big"
)

func main() {

	var a big.Int
	var b big.Int
	var sum big.Int
	var minus big.Int
	var multiply big.Int

	fmt.Scanln(&a)
	fmt.Scanln(&b)

	sum.Add(&a, &b)
	minus.Sub(&a, &b)
	multiply.Mul(&a, &b)
	fmt.Println(sum.String())
	fmt.Println(minus.String())
	fmt.Println(multiply.String())
}
