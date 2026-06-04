test_src = files('readFile.cpp')

# Define the test executable
test_exe = executable('readfile_test', test_src,
                      dependencies: [uscr_dep]
)

test('readfile', test_exe)

