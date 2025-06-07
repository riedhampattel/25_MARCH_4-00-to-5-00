delimiter &&
create procedure display()
select * from employees order by salary;
end &&

call display();

drop procedure display;

delimiter &&
create procedure display(in id int)
begin
select * from employees where employee_id = id;
end &&

call display(101);

delimiter &&
create procedure update_sal(in did int,sal int)
begin
update employees set salary = salary + sal where department_id = did;
end &&

call update_sal(90,5000);

select * from employees where department_id = 90;

select * from employees;

create view Person as select employee_id,first_name,last_name from employees;

select * from person;

drop table student;

create table student
(id int auto_increment primary key,
name varchar(25) not null,
percentage float default 0,
status varchar(5) not null
);

insert into student(name,percentage,status) values('Rohan',85.65,'PASS');
insert into student(name,status) values('Rahul','FAIL');

select * from student;