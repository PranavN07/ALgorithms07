# Write your MySQL query statement below
SELECT 
en.unique_id as unique_id, e.name as name from Employees e LEFT JOIN EmployeeUNI en on e.id=en.id