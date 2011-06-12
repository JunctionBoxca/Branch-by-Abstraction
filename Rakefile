require 'rake/clean'

BIN_DIR='bin'
EXE=File.join(BIN_DIR,'bba')
SRC=FileList[File.join('src', 'main', '**', '*.cpp')]
INCLUDE=File.join('src', 'main')
OBJ=SRC.ext('o')

CLEAN.include(OBJ)
CLOBBER.include(BIN_DIR)

def cpp(args)
	sh "g++ -W -Wall -Werror -O2 #{args}"
end

rule '.o' => ['.cpp'] do |t|
	cpp "#{t.source} -c -I#{INCLUDE} -o #{t.name}"
end

file BIN_DIR do
	Dir.mkdir(BIN_DIR)
end

file EXE => OBJ + [BIN_DIR] do
	cpp "-o #{EXE} -I#{INCLUDE} #{OBJ}"
end

desc "Default: compile "
task :default => [:compile]

desc "Compile #{EXE}"
task :compile => [EXE]

