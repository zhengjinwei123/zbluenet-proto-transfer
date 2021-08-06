@echo off

set GEN_EXE=%~dp0\prototransfer.exe
set PROTO_FILES_PATH=.\protofiles
set DEST_PROTO_PATH=zbluenet/demo/proto/

cd %PROTO_FILES_PATH%
for %%i in (*) do (
	cd ..
	%GEN_EXE% protocol %%i %DEST_PROTO_PATH%
	cd %PROTO_FILES_PATH%
	echo " %%i "
)

@pause



