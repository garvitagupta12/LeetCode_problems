# Write your MySQL query statement below
SELECT (
    SELECT DISTINCT salary 
    FROM (
        SELECT salary, 
               DENSE_RANK() OVER (ORDER BY salary DESC) AS rn
        FROM Employee
    ) tmp
    WHERE rn = 2
) AS SecondHighestSalary;