import itertools

def check(b, c, d):
    return pow(b, 3) + pow(c, 3) + pow(d, 3)


def main():
    for i in xrange(201):
        for e in itertools.combinations(xrange(2, 201), 3):
            result = pow(e[0], 3) + pow(e[1], 3) + pow(e[2], 3)
            i_cube = pow(i, 3)

            if (i_cube == result):
                print "Cube = {0}, Triple = ({1},{2},{3})".format(i, e[0], e[1], e[2])



main()