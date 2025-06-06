drop table users;

create table users
(id int auto_increment primary key,
name varchar(25) not null,
age int not null
);

insert into users(name,age) values('Rahul',25);
insert into users(name,age) values('Rohan',22);

truncate table users;

select * from users;

create table new_users
(name varchar(25) not null,
age int,
registered time
);

create trigger auto_copy
after insert on 25_march.users
for each row
insert into new_users values(new.name,new.age,curtime());

insert into users(name,age) values('Rohan',25);
insert into users(name,age) values('Rahul',23);
insert into users(name,age) values('Roshan',21);

select * from users;

select * from new_users;

create table deleted_users
(id int,
name varchar(25),
age int,
delete_time time
);

create trigger deleted
before delete on 25_march.users
for each row
insert into deleted_users values(old.id,old.name,old.age,curtime());

select * from deleted_users;

select * from users;

delete from users where id = 3;
delete from users where id = 2;