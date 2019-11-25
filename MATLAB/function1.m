a=input('Enter a number:');
pos(a);
x=input('Enter a positive number:');
y=input('Enter another positive number:');
sub(x,y);
p=input('Enter any number:');
q=input('Enter another number:');
add_sub(p,q);
function pos(a)
if a>0
    fprintf('%4u is Positive.\n',a);
else
    fprintf('%4u is Negetive.\n',a);
end
end
function sub(x,y)
z=x-y;
fprintf('Result of Substraction: %4u\n',z);
pos(z);
end
function add_sub(p,q)
fprintf('Addition: %4u\n',p+q);
fprintf('Substraction: %4u\n',p-q);
end