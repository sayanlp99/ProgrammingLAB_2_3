n=input('Enter row of first matrix:');
m=input('Enter column of first matrix:');
fprintf('First Matrix:\n');
a=zeros(n,m)
i=input('Enter row of second matrix:');
j=input('Enter column of second matrix:');
fprintf('Second Matrix:\n');
b=ones(i,j)
fprintf('Concated Matrix:\n');
c=[a,b]
u=input('Enter value:');
for x=1:n
    for y=1:m+j
        if x==y
            c(x,y)=u;
        end
    end
end
fprintf('Updated Matrix:\n');
c
for x=1:n
    for y=1:m+j
        if x==y
            if x<n
                c(x+1,y)=u+5;
            end
            if y<m+j
                c(x,y+1)=u+5;
            end
        end
    end
end
fprintf('Updated Matrix:\n');
c