CREATE TABLE batch(
	batch_id int IDENTITY PRIMARY KEY,
	batch_name varchar(255) NOT NULL UNIQUE,
);


CREATE TABLE department(
	dept_id int IDENTITY PRIMARY KEY,
	dept_name varchar(255) NOT NULL UNIQUE,
);

CREATE TABLE student(
	stud_regno int PRIMARY KEY,
	stud_name varchar(255) NOT NULL,
	department varchar(255) FOREIGN KEY REFERENCES department(dept_name),
	batch varchar(255) FOREIGN KEY REFERENCES batch(batch_name),
);


INSERT INTO batch(batch_name) VALUES ('BSCS-01');

INSERT INTO department(dept_name) VALUES ('Computer Science');

INSERT INTO student(stud_regno,stud_name,department,batch) VALUES (200901097,'Muhammad Mobeen','Computer Science','BSCS-01'),
																  (200901037,'Awais Afzal','Computer Science','BSCS-01'),
																  (200901124,'Ahmed Rohail Awan','Computer Science','BSCS-01');




SELECT * FROM batch;
SELECT * FROM department;
SELECT * FROM student;