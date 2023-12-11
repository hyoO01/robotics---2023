
	
	# list_ops.py
def add(foo, bar):
    out = []
    for f, b in zip(foo, bar):
        out.append(f + b)
    return out

def subtract(foo, bar):
    out = []
    for f, b in zip(foo, bar):
        out.append(f - b)
    return out
    
    # 아래쪽에 추가
def multiply(foo, bar):
    out = []
    for f, b in zip(foo, bar):
        out.append(f * b)
    return out

def divide(foo, bar):
    out = []
    for f, b in zip(foo, bar):
        out.append(f / b)
    return out
    
    # main.py
import list_ops as lo

if __name__ == "__main__":
    foo = [1,2,3]
    bar = [4,5,6]
    print("foo+bar=", lo.add(foo, bar))
    print("foo-bar=", lo.subtract(foo, bar))
    print("foo*bar=", lo.multiply(foo, bar))
    print("foo/bar=", lo.divide(foo, bar))
