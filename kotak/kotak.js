kotak=(o,p)=>{
var n1 = p-1
var a = "┏"+"━┳".repeat(n1)+"━┓"
var b = String("\n┣"+"━╋".repeat(n1)+"━┫").repeat(o-1)
var c = "\n┗"+"━┻".repeat(n1)+"━┛"
return a+b+c
}

console.log(kotak(10,7))
