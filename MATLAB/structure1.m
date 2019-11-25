n=input('Enter number of students:');
for i=1:n
    s(i).name=input('Enter Name:','s');
    s(i).roll=input('Enter Roll Number:');
    for j=1:5
        s(i).marks(j)=input('Enter Marks:');
    end
end
fprintf('Enter option:\n1.Show students with marks greater than 90\n2.Show rolls with same name\n');
ch=input('Enter choice:');
switch ch
    case 1
        fprintf('Name of students with marks greater than 90 in Subject3:\n');
        for i=1:n
            if s(i).marks(3)>90
                fprintf('%s\n',s(i).name);
            end
        end
case 2
    for i=1:n-1
        for j=2:n
            if i~=j
            if s(i).name==s(j).name
                fprintf('%4u\t%4u',s(i).roll,s(j).roll);
            end
        end
    end
    end
    fprintf('\n');
end