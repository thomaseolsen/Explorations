program hello
    character(len=64) :: arg

    if (command_argument_count() > 0) then
        call get_command_argument(1, arg)
        print *, "Hello, ", trim(arg), "!"
    else
        print *, "Hello World!"
    end if
end program hello