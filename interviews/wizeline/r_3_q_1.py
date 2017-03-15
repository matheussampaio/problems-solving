# "192.168.1.1" => True
# "255.255.255.255" => True
# "0.0.0.0" => True
# "0.0.0" => False
# "256.255.255.255" => False
# "255.255.255.255.255" => False

def solution(string):
    nums = string.split(".")

    if len(nums) != 4:
        return False

    for num in nums:
        try:
            parsed_num = int(num)

            if parsed_num < 0 or parsed_num > 255:
                return False

        except:
            return False

    return True

assert solution("192.168.1.1") == True
assert solution("255.255.255.255") == True
assert solution("0.0.0.0") == True
assert solution("0.0.0") == False
assert solution("256.255.255.255") == False
assert solution("255.255.255.255.255") == False
