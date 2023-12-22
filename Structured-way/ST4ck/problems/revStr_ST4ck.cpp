#include <iostream>
#include <stack>
using namespace std;

void reverseSentense(string sentence)
{
    stack<string> st;
    for (int i = 0; i < sentence.length(); i++)
    {
        string word = "";
        while (sentence[i] != ' ' && sentence.length()){
            word+=sentence[i];
            i++;
        }
    }
}

int main()
{
    stack<int> st;

    string sentence = "You are enough just as you are!";

    return 0;
}