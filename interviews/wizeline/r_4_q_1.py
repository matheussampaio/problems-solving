# Write a method that for a given input string, reverse all the characters inside parentheses. Consider nested parentheses.
# 'foo(bar(baz))blim' => 'foo(barzab)blim' => 'foobazrabblim'
# 'foo' => 'foo'
# 'foo()' => 'foo'
# '(bar)' => 'rab'
# '(bas)er(ert)' => sabertre

def solution(string):
    stack = []

    word = ""

    for c in string:
        if c == "(":
            stack.append(word)
            word = ""

        elif c == ")":
            tmp = word[::-1]

            if len(stack):
              word = stack.pop() + tmp
            else:
              word = "" + tmp

        else:
            word += c

    stack.append(word)

    return "".join(stack)


assert solution("foo(bar(baz))blim") == "foobazrabblim"
assert solution("foo") == "foo"
assert solution("foo()") == "foo"
assert solution("(bar)") == "rab"
assert solution("(bas)er(ert)") == "sabertre"
