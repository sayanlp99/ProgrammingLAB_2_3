marks=input('Enter Marks:');
x=marks-rem(marks,10);
y=x/10;
switch y
    case 10
        fprintf('Grade:O\n');
    case 9
        fprintf('Grade:A\n');
    case 8
        fprintf('Grade:B\n');
    case 7
        fprintf('Grade:C\n');
    case 6
        fprintf('Grade:D\n');
    case 5
        fprintf('Grade:E\n');
    otherwise
        fprintf('Grade:F\n');
end