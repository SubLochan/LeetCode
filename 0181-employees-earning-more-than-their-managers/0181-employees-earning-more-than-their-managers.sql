/* Write your PL/SQL query statement below */
SELECT e.name as Employee from Employee e join Employee ep on e.managerId = ep.id where e.salary > ep.salary;