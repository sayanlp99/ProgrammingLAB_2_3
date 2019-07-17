a=input('Enter number:');
b=a-rem(a,10);
c=b/10;
switch c
    case 10
        fprintf('Grade: O\n');
    case 9
        fprintf('Grade: O\n');
    case 8
        fprintf('Grade: A\n');
    case 7
        fprintf('Grade: B\n');
    case 6
        fprintf('Grade: C\n');
    case 5
        fprintf('Grade: D\n');
    otherwise
        fprintf('Grade: F\n');
end
