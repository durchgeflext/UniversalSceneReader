project('UniversalSceneReader', 'cpp',
  version: '0.0.1',
  meson_version: '>=0.53.0',
  default_options: ['warning_level=3', 'cpp_std=c++20']
)

# Include direcories
uscr_inc = include_directories('include')

# Sources
subdir('src')

# These arguments are only used to build the shared library
# not the executables that use the library.
lib_args = ['-DUSCR_EXPORTS']

universal_scene_reader = library(
  'UniversalSceneReader',
  uscr_src,
  include_directories: uscr_inc,
  cpp_args: [lib_args],
  install: true,
)

uscr_dep = declare_dependency(link_with: universal_scene_reader, include_directories: uscr_inc)

subdir('test')