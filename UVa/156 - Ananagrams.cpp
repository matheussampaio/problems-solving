#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iterator>
/*
Problem:
http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=92

Ananagrams

Most crossword puzzle fans are used to anagrams--groups of words with the same letters in different orders--for example OPTS, SPOT, STOP, POTS and POST. Some words however do not have this attribute, no matter how you rearrange their letters, you cannot form another word. Such words are called ananagrams, an example is QUIZ.

Obviously such definitions depend on the domain within which we are working; you might think that ATHENE is an ananagram, whereas any chemist would quickly produce ETHANE. One possible domain would be the entire English language, but this could lead to some problems. One could restrict the domain to, say, Music, in which case SCALE becomes a relative ananagram (LACES is not in the same domain) but NOTE is not since it can produce TONE.

Write a program that will read in the dictionary of a restricted domain and determine the relative ananagrams. Note that single letter words are, ipso facto, relative ananagrams since they cannot be ``rearranged'' at all. The dictionary will contain no more than 1000 words.

Input

Input will consist of a series of lines. No line will be more than 80 characters long, but may contain any number of words. Words consist of up to 20 upper and/or lower case letters, and will not be broken across lines. Spaces may appear freely around words, and at least one space separates multiple words on the same line. Note that words that contain the same letters but of differing case are considered to be anagrams of each other, thus tIeD and EdiT are anagrams. The file will be terminated by a line consisting of a single #.

Output

Output will consist of a series of lines. Each line will consist of a single word that is a relative ananagram in the input dictionary. Words must be output in lexicographic (case-sensitive) order. There will always be at least one relative ananagram.

Sample input

ladder came tape soon leader acme RIDE lone Dreis peat
 ScAlE orb  eye  Rides dealer  NotE derail LaCeS  drIed
noel dire Disk mace Rob dries a a b c A
#
Sample output

Disk
NotE
derail
drIed
eye
ladder
soon

*/


using namespace std;

int main()
{

    map<string, vector<string> > dic;
    string line;

    vector<string> result;

    while (getline(cin, line))
    {

        if (line.compare("#") == 0)
            break;

        istringstream iss(line);

        string word, tmp_word;

        while (iss >> word)
        {

            if (word.size() > 1)
            {
                tmp_word = word;

                transform(tmp_word.begin(), tmp_word.end(), tmp_word.begin(), ::toupper);
                sort(tmp_word.begin(), tmp_word.end());

                dic[tmp_word].push_back(word);

            }
            else
            {

                dic[word].push_back(word);

            }
        }

    }

    for (map<string, vector<string> >::iterator iter = dic.begin(); iter != dic.end(); ++iter)
    {
        if (iter->first.size() == 1)
        {
            result.push_back(iter->second[0]);
        }
        else if (iter->second.size() == 1)
        {
            result.push_back(iter->second[0]);
        }
    }

    sort(result.begin(), result.end());

    for (vector<string>::iterator iter = result.begin(); iter != result.end(); ++iter)
    {
        cout << *iter << endl;
    }

    return 0;
};