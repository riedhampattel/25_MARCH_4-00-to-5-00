select * from employees;

-- display all data of employees table
select * from employees;

-- display only those who get salary more than 10000;
select * from employees where salary>10000;

select * from employees where salary>10000 and salary<20000;

select * from employees where department_id = 90 or department_id = 60;

select * from employees where comission_pct is not null;

select * from employees where comission_pct is null;

select * from employees where employee_id between 100 and 150;

select distinct department_id from employees;

select * from employees where department_id = 90 or department_id = 60 or department_id = 50;

select * from employees where department_id in (90,60,50);

select * from employees where department_id not in (90,60,50);

select * from employees where first_name like '%e_';

select * from employees where hire_date like '%-J_N-%';

select * from employees where hire_date like '%-JU_-%';

select first_name,last_name,salary*12 as annual_salary from employees;

select first_name,last_name,salary,salary*comission_pct as comission_amnt,(salary*comission_pct) + salary as total_salary from employees;