def kotak(o,p):
        n1 = p-1
        a = "┏"+"━┳"*n1+"━┓"
        b = ("\n┣"+"━╋"*n1+"━┫")*(o-1)
        c = "\n┗"+"━┻"*(n1)+"━┛"
        return a+b+c

print(kotak(10,7))
