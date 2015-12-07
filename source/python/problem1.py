max = 999
def sumDivisbleBy(n):
    p = max / n
    return n * p * (p + 1) / 2
def main():
    print sumDivisbleBy(3)+ sumDivisbleBy(5) - sumDivisbleBy(15)
if __name__ == "__main__": main()