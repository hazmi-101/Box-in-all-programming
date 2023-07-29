package main

import (
	"fmt"
	"strings"
)

func kotak(o, p int) string {
	n1 := p - 1
	a := "┏" + strings.Repeat("━┳", n1) + "━┓"
	b := strings.Builder{}
	b.Grow((o - 1) * (4*n1 + 1))
	for i := 0; i < o-1; i++ {
		b.WriteString("\n┣" + strings.Repeat("━╋", n1) + "━┫")
	}
	c := "\n┗" + strings.Repeat("━┻", n1) + "━┛"
	return a + b.String() + c
}

func main() {
	fmt.Println(kotak(10, 7))
}
