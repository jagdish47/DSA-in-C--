#include <bits/stdc++.h>
using namespace std;

void reverseWords(string S)
{
    string temp;
    vector<string> answer;

    for (int i = 0; i < S.length(); i++)
    {

        if (S[i] == '.')
        {
            if (i == S.length() - 1)
            {
                temp += S[i];
                answer.push_back(temp);
                break;
            }
            answer.push_back(temp);
            temp = "";
        }
        else if (S[i] != '.')
        {

            temp += S[i];
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
    int start = 0;
    int end = answer.size() - 1;

    while (start <= end)
    {
        swap(answer[start], answer[end]);
        start++;
        end--;
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
}

int main()
{

    string S = "i.like.this.program.very.much";
    reverseWords(S);

    return 0;
}