package main

import (
	"fmt"
	"time"
)

func main() {

	var time = time.Now().UTC()

	fmt.Println(time.Format("2006-01-02"))
}
