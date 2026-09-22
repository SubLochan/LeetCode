/* Write your PL/SQL query statement below */
select d.name as Department, e.name as Employee ,e.salary as Salary from Employee e join Department d on e.departmentId = d.id LEFT JOIN Employee e2
    ON e.departmentId = e2.departmentId
    AND e.salary < e2.salary
WHERE e2.id IS NULL;