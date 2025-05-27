create schema 25_march;

create table student
(
id int not null unique,
name varchar(25) not null,
percentage float not null,
grade char not null
);

describe student;

-- rename table
alter table student rename to employee;

describe employee;

-- rename table
alter table employee rename to student;

-- rename column
alter table student rename column id to roll;

describe student;

-- change the data type of the column
alter table student modify grade varchar(1);

alter table student modify grade char not null;

describe student;

-- add column at last
alter table student add column city varchar(20) not null;

-- delete column
alter table student drop column city;

-- add column at specific position
alter table student add column city varchar(20) not null after name;

describe student;

drop table student;

drop schema 25_march;