create role student;

create role consellor;

create role admin;

create user Rohan identified by 'abc@123' default role student;

grant select on student to Rohan;

revoke select on student from Rohan;

grant insert,delete on student to Rohan;

select * from student;