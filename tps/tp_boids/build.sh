export build_dir=_build

mkdir $build_dir
cd $build_dir

cmake .. -G "Unix Makefiles"

make
