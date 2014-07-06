from __future__ import print_function

def show2():
    print ('printf("', end='')

    for i in range(0, 10**2):
        str_i = "%02d" % i

        a, b = int(str_i[:1]), int(str_i[1:])

        num = (a + b)*(a + b)

        result = "%02d" % num

        if (result == str_i):
            print ("{0}\\n".format(str_i), end='')

    print('")')

def show4():
    print ('printf("', end='')
    for i in range(0, 10**4):
        str_i = "%04d" % i

        a, b = int(str_i[:2]), int(str_i[2:])

        num = (a + b)*(a + b)

        result = "%04d" % num

        if (result == str_i):
            print ("{0}\\n".format(str_i), end='')

    print('")')

def show6():
    print ('printf("', end='')
    for i in range(0, 10**6):
        str_i = "%06d" % i

        a, b = int(str_i[:3]), int(str_i[3:])

        num = (a + b)*(a + b)

        result = "%06d" % num

        if (result == str_i):
            print ("{0}\\n".format(str_i), end='')

    print('")')

def show8():
    print ('printf("', end='')

    left, right = 0, 0

    while (left <= 9999):

        while (right <= 9999):

            str_i = "%04d%04d" % (left, right)

            a, b = int(str_i[:4]), int(str_i[4:])

            num = (a + b)*(a + b)

            result = "%08d" % num

            if (result == str_i):
                print ("{0}\\n".format(str_i), end='')

            right += 1

        left += 1
        right = 0

    print('")')

show2();
show4();
show6();
show8();