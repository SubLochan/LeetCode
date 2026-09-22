# Write your MySQL query statement below
select e.name as Employee from Employee e cross join Employee ep on e.managerId = ep.id where e.salary > ep.salary;