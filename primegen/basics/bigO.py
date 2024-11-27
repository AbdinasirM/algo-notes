def sum_char_codes(n:str) ->int:
    total = 0
    for char in n:
        total+=ord(char)
    return total

result = sum_char_codes("Hello world")
print(result)

def ssum_char_codes(n:str) ->int:
    total = 0
    for char in n:
        total+=ord(char)
        
    for char in n:
        total+=ord(char)
    return total


def ssum_char_codes(n:str) ->int:
    total = 0
    for char in n:
        total+=ord(char)
        for char in n:
            total+=ord(char)
    return total



result = sum_char_codes("Hello world")
print(result)