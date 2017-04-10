#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * \namespace HomeWork3 A program that creates correctly formatted html for a table
 */

/*! Function that reads the words of a user's input.
 *
 *  Asks user for input and proceeds outputs the html for a html table
 *
 */

int main()
{
    string word; /**< Intitilizes string variable for input */
    vector<string> words; /**< Intitilizes the vector to hold all the words of input */
    cout << "Enter Input: "; /**< Asks user for input */

    while (cin >> word) {
        words.push_back(word);
    }

    int leftoverWords = words.size() % 5; /**< Intitilizes int variable that indicates how many excess words there are */

    for (int index = 0; index < leftoverWords; ++index) {
        words.pop_back();
    }

    string output; /**< Intitilizes string variable */
    for (int index = 0; index < words.size(); ++index) {
        if (index % 5 == 0) {
                output.append("<tr>");
        }
        if (index > 4 && words.at(index) == words.at(index - 5)) {

        }
        else {
            int numVertical = 1; /**< Intitilizes int variable */
            int index2 = index; /**< creating a int with index's intial value so I can change it and not mess up the for loop*/
            while (index2 + 5 < words.size() && words.at(index2) == words.at(index2 + 5)) {
                ++numVertical;
                index2 += 5;
            }

            output.append("<td rowspan='");
            output.append(to_string(numVertical));
            output.append("'>");
            output.append(words.at(index));
            output.append("</td>");
        }
        if (index != 0 && (index + 1) % 5 == 0) {
                output.append("</tr>\n");
            }

    }

    cout << "<table border='1'>" << endl; /**< Prints out the string  */
    cout << output << endl; /**< Prints out the concatenated output  */
    cout << "</table>" << endl; /**< Prints out the string */



}



