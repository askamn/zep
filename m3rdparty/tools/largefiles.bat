forfiles /P assets /M *.* /S /C "cmd /c if @fsize gtr 20000 echo @path @fsize @fdate @ftime"