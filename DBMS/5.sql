select * from student;

delete from student where id = 101;
delete from student where id = 102;
delete from student where id = 103;

select * from student;

rollback;

select * from student;

delete from student where id = 101;

commit;

delete from student where id = 102;
delete from student where id = 103;

rollback;

select * from student;

savepoint s1;
delete from student where id = 102;
savepoint s2;
delete from student where id = 103;
savepoint s3;
delete from student where id = 104;

select * from student;

rollback to s2;

select * from student;

rollback;

select * from student;