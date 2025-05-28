create schema 25_march;

create table 25_march.student
(id int not null unique,
name varchar(20) not null,
percentage float not null
);

describe student;

select id,name,percentage from student;

insert into student values (101,'Rahul',98.56);
insert into student values (102,'Rohan',52.63);
insert into student(percentage,id,name) values (25.65,103,'Tisa');
insert into student values (104,'Megha',85.65),(105,'Mahesh',45.25);

update student set name = 'Margi';

select id,name,percentage from student;

update student set name = 'Margi' where id = 103;

update student set percentage = 52.63 where name = 'Margi';

update student set percentage = percentage + 10 where id = 102 or id = 103;

delete from student where id = 101;

delete from student where name = 'Megha';

select id,name,percentage from student;

select * from student;

select * from student where name = 'Rohan';

select * from student where percentage>50;