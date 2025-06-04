create table users
(user_id int primary key,
name varchar(25) not null,
age int not null
); 

describe users;

create table proucts
(product_id int not null unique,
product_name varchar(25) not null,
user_id int not null,
foreign key products(user_id) references users(user_id)
);

describe proucts;

alter table proucts rename to products;

insert into users values (101,'Rohan',25);
insert into users values (102,'Rahul',25);
insert into users values (103,'Rohan',23);
insert into users values (104,'Shreya',24);
insert into users values (105,'Megha',23);

select * from users;

insert into products values(1,'Perfume',101);
insert into products values(2,'Shampoo',101);
insert into products values(3,'Soap',103);
insert into products values(4,'Conditioner',104);
insert into products values(5,'Comb',103);

select * from products;

select * from users natural join products;

select users.name,products.product_name
from users inner join products
on users.user_id = products.user_id;

select users.user_id,users.name,products.product_name
from users left join products
on users.user_id = products.user_id;

select users.user_id,users.name,products.product_name
from users right join products
on users.user_id = products.user_id;

select * from users cross join products order by 1;

create table CG
(id int,
name varchar(25)
);

insert into CG values(101,'Shubham');
insert into CG values(102,'Mahek');
insert into CG values(103,'Manas');

create table SG
(id int,
name varchar(25)
);
insert into SG values(101,'Shubham');
insert into SG values(104,'Hiren');
insert into SG values(105,'Divya');

select * from CG
union
select * from SG;

select * from CG
union all
select * from SG;