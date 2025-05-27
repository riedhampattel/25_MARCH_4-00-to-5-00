create schema 25_march;

create table student
(
id int not null unique,
name varchar(25) not null,
percentage float not null,
grade char not null
);

describe student;

alter table student rename to employee;

describe employee;

alter table employee rename to student;

alter table student rename column id to roll;

describe student;

alter table student modify grade varchar(1);

alter table student modify grade char not null;

describe student;

alter table student add column city varchar(20) not null;

alter table student drop column city;

alter table student add column city varchar(20) not null after name;

describe student;

drop table student;

drop schema 25_march;