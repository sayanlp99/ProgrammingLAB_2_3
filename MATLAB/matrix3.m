m=input('Enter row of first matrix:');
n=input('Enter column of first matrix:');
fprintf('Matrix m1:\n');
m1=rand(m,n)
fprintf('Matrix m2:\n');
m2=rand(m,n)
fprintf('Matrix m3:\n');
m3=m1.*m2
fprintf('Matrix m4:\n');
m4=m3(2:m-1,2:n-1)
fprintf('Matrix m5:\n');
t=m4(2,:);
i=find(t>0.1);
i=find(t<0.3);
m5=t(i)
fprintf('Matrix m6:\n');
m6=max(max(m5))