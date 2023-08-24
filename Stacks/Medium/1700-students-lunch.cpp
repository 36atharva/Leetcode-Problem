/*
Leetcode 1700
Medium, using queues operations
*/

class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        int n = students.size();
        queue<int> choice;
        for (int i = 0; i < n; i++)
        {
            choice.push(students[i]);
        }

        int rotations = 0;
        int i = 0;
        while (choice.size() && rotations < choice.size())
        {
            if (choice.front() == sandwiches[i])
            {
                choice.pop();
                rotations = 0;
                i++;
            }
            else
            {
                choice.push(choice.front());
                choice.pop();
                rotations++;
            }
        }
        return choice.size();
    }
};