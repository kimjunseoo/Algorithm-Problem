package main

import (
	"fmt"
	"math/big"
)

func main() {

	var total big.Int
	var people big.Int
	var quotient big.Int
	var remainder big.Int

	fmt.Scan(&total, &people)
	quotient.Div(&total, &people)
	remainder.Mod(&total, &people)

	fmt.Println(quotient.String())
	fmt.Println(remainder.String())
}
