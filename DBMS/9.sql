begin
	dbms_output.put_line('HELLO WORLD');
end;

begin
	dbms_output.put_line('Hello World');
	dbms_output.put_line('How are you?');
end;

begin
	dbms_output.put('How are you?');
	dbms_output.put_line(' I am fine');
end;

declare
	a number := 15;
	b number := 25;
begin
	dbms_output.put_line('THE ADDITION IS = '||(a+b));
	dbms_output.put_line('THE SUBTRACTION IS = '||(a-b));
	dbms_output.put_line('THE MULTIPLICATION IS = '||(a*b));
	dbms_output.put_line('THE DIVISION IS = '||(a/b));
	dbms_output.put_line('THE REMAINDER IS = '||MOD(a,b));
end;

declare --block1
x number := 10;
begin
	declare --block2
	y number := 20;
	begin
		declare --block3
		z number := 30;
		begin
			dbms_output.put_line('value of x = '||x);
			dbms_output.put_line('value of y = '||y);
			dbms_output.put_line('value of z = '||z);
		end; --block3
		dbms_output.put_line('value of x = '||x);
		dbms_output.put_line('value of y = '||y);
	end;
	dbms_output.put_line('value of x = '||x);
end;

-- simple if...else
declare
	num number := 6;
begin
	if mod(num,2) = 0 then
		dbms_output.put_line('this is an even number');
	else
		dbms_output.put_line('this is an odd number');
	end if;
end;
-- ladder if...else
declare
	n1 number := 10;
	n2 number := 20;
	n3 number := 30;
begin
	if n1>n2 and n1>n3 then
		dbms_output.put_line(n1||' is a biggest number');
	elsif n2>n1 and n2>n3 then
		dbms_output.put_line(n2||' is a biggest number');
	else
		dbms_output.put_line(n3||' is a biggest number');
	end if;
end;

-- nested if...else
declare
	n1 number := 10;
	n2 number := 20;
	n3 number := 30;
begin
	if n1>n2 then
		if n1>n3 then
			dbms_output.put_line(n1||' is a biggest number');
		else
			dbms_output.put_line(n3||' is a biggest number');
		end if;
	else
		if n2>n3 then
			dbms_output.put_line(n2||' is a biggest number');
		else
			dbms_output.put_line(n3||' is a biggest number');
		end if;
	end if;
end;