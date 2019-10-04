isbn = input()

if len(isbn) != 10:
    print('Illegal ISBN')

else:
    isbn_sum = sum((i + 1) * int(j) for i, j in enumerate(isbn))

    if isbn_sum % 11 == 0:
        print('Legal ISBN')

    else:
        print('Illegal ISBN')