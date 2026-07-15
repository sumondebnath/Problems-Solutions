/*
    https://leetcode.com/problems/second-highest-salary/description/?envType=problem-list-v2&envId=database
*/

SELECT(
    SELECT MAX(salary) FROM Employee WHERE salary < (
        SELECT MAX(salary) FROM Employee
    )
) AS SecondHighestSalary;