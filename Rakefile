require 'rake/clean'

BIN_DIR='bin'
EXE=File.join(BIN_DIR,'bba')
SRC=FileList[File.join('src', 'main', '**', '*.cpp')]
INC=File.join('src', 'main', 'cpp')
OBJ=SRC.ext('o')

TEST_EXE=File.join(BIN_DIR,'test_runner')
TEST_INC=File.join('src', 'test', 'cpp')
TEST_SRC=FileList[File.join('src', 'test', '**', '*.cpp')]
TEST_OBJ=TEST_SRC.ext('o')

CLEAN.include(OBJ)
CLOBBER.include(BIN_DIR)

def cpp(args)
	sh "g++ -W -Wall -Werror -O2 #{args}"
end

rule '.o' => ['.cpp'] do |t|
	cpp "#{t.source} -c -I#{INC} -I#{TEST_INC} -o #{t.name}"
end

file BIN_DIR do
	Dir.mkdir(BIN_DIR)
end

file EXE => OBJ + [BIN_DIR] do
	cpp "-o #{EXE} -I#{INC} -lcrypto -lssl #{OBJ}"
end

file TEST_EXE => TEST_OBJ + [BIN_DIR] do
	cpp "-o #{TEST_EXE} -I#{INC} -I#{TEST_INC} #{TEST_OBJ}"
end

desc "Default: compile "
task :default => [:compile]

desc "Compile #{EXE}"
task :compile => [EXE]

desc "Run test suite"
task :test => [TEST_EXE] do
	sh TEST_EXE
end
