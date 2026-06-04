project('UniversalSceneReader', 'cpp',
  version: '0.0.1',
  meson_version: '>=1.1.0',
  default_options: ['warning_level=3', 'cpp_std=c++20', 'buildtype=debug']
)

# import cmake
cmake = import('cmake')

# Options
if get_option('loglevel') == 'auto'
  if get_option('buildtype').startswith('debug')
    add_project_arguments('-DSPDLOG_ACTIVE_LEVEL=SPDLOG_LEVEL_DEBUG', language : 'cpp')
  endif
else
  add_project_arguments('-DSPDLOG_ACTIVE_LEVEL=SPDLOG_LEVEL_' + get_option('loglevel').to_upper(), language : 'cpp')
endif

# Dependencies
spdlog = dependency('spdlog', version : ['>=1.12.0'], fallback : ['spdlog', 'spdlog_dep'])

# Include direcories
uscr_inc = include_directories('include')

# Sources
subdir('src')

# Set exports variable for DLL.
lib_args = ['-DUSCR_EXPORTS']

universal_scene_reader = library(
  'UniversalSceneReader',
  uscr_src,
  include_directories: uscr_inc,
  dependencies: [
    spdlog
  ],
  cpp_args: [lib_args],
  install: true,
)

uscr_dep = declare_dependency(link_with: universal_scene_reader, include_directories: uscr_inc)

subdir('test')