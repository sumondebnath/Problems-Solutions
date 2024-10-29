/*
    Problem Link : https://www.geeksforgeeks.org/problems/introduction-to-trees/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-trees
*/

class Solution
{
public:
    int countNodes(int i)
    {
        // your code here
        int max_node = pow(2, i - 1);
        return max_node;
    }
};