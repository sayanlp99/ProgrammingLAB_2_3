n=input('Enter Row for First Matrix:');
m=input('Enter Column for First Matrix:');
a=zeros(n,m);
disp(a);
i=input('Enter Row for Second Matrix:');
j=input('Enter Column for Second Matrix:');
b=ones(i,j);
disp(b);
c=[a,b];
fprintf('Concat:\n')
disp(c);
u=input('Enter value:');
for x=1:n
    for y=1:m+j
        if x==y
            c(x,y)=u;
        end
    end
end
fprintf('Matrix with updated value\n');
disp(c);
z=input('Enter value:');
for x=1:n
    for y=1:m+j
        if x==y
            if x<n
                c(x+1,y)=z;
            end
            if y<m+j
                c(x,y+1)=z;
            end
        end
    end
end
fprintf('Matrix with updated value\n');
disp(c);