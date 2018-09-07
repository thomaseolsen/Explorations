with Ada.Text_IO; use Ada.Text_IO;
with Ada.Command_Line; use Ada.Command_Line;

procedure HelloAda is
begin
    if Argument_Count > 0 then
        Put_Line("Hello, " & Argument(1) & "!");
    else
        Put_Line("Hello World!");
    end if;
end HelloAda;
