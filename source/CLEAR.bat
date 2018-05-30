@del "*.bak"


@del "Output\*.__*"
@del "Output\RL*_Project.*"
@del "Output\RL*_Project_RS.txt"
@del "Output\*.l*"
@del "Output\*.o*"
@del "Output\*.p*"

@rmdir /S /Q "Output\RL6193"
@rmdir /S /Q "Output\RL6369"
@rmdir /S /Q "Output\RL6410"
@rmdir /S /Q "Output\RL6432"

for /F "delims=" %%a in ('dir .\*.~h /S /B')  do @del "%%a"
for /F "delims=" %%a in ('dir .\*.~c /S /B')  do @del "%%a"
for /F "delims=" %%a in ('dir .\*.~a5 /S /B') do @del "%%a"
for /F "delims=" %%a in ('dir .\*.tmp /S /B') do @del "%%a"
for /F "delims=" %%a in ('dir .\*.bak /S /B') do @del "%%a"
for /F "delims=" %%a in ('dir .\*.opt /S /B') do @del "%%a"
