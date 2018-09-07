program HelloPascal;

begin
    if ParamCount > 0 then
        begin
            writeln('Hello, ' + ParamStr(1) + '!');
        end
    else
        begin
            writeln('Hello World!');
        end;
end.