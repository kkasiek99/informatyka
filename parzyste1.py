
def parzyste(n):
    ile = list(range(0, n+1, 2))
    print(ile)
    return len(ile)

def main(args):
    return 0
    
    n= int(input("Podaj liczbę: "))
    print("Parzystych", parzyste(n))
    
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
